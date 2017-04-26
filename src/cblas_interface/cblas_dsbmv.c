/* $Id: hooks.h 3741 2013-10-01 12:54:54Z komart $ */
/* 
 Copyright (C) 2013  Martin Köhler, koehlerm@mpi-magdeburg.mpg.de

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "cblas.h"
#include "cblas_f77.h"
#include "../hooks.h"


void cblas_dsbmv(const enum CBLAS_ORDER order,
                 const enum CBLAS_UPLO Uplo, const int N, const int K,
                 const double alpha, const double  *A, const int lda,
                 const double  *X, const int incX, const double beta,
                 double  *Y, const int incY)
{
   char UL;
   #define F77_UL &UL   
#ifdef F77_INT
   F77_INT F77_N=N, F77_K=K, F77_lda=lda, F77_incX=incX, F77_incY=incY;
#else
   #define F77_N N
   #define F77_K K
   #define F77_lda lda
   #define F77_incX incX
   #define F77_incY incY
#endif
#ifdef FLEXIBLAS_PROFILE
   flexiblas_call_dsbmv[POS_CBLAS] ++;
#endif 

   if ( flexiblas_dsbmv.call_cblas != NULL ) {
#ifdef FLEXIBLAS_PROFILE
	   double te, ts = flexiblas_wtime(); 
#endif
	   void (*fn)
		 (const enum CBLAS_ORDER order,
                 const enum CBLAS_UPLO Uplo, const int N, const int K,
                 const double alpha, const double  *A, const int lda,
                 const double  *X, const int incX, const double beta,
                 double  *Y, const int incY)
		   = flexiblas_dsbmv.call_cblas;
		fn(order,Uplo,N,K,alpha,A,lda,X,incX,beta,Y,incY);
#ifdef FLEXIBLAS_PROFILE
	   te = flexiblas_wtime(); 
	   flexiblas_time_dsbmv[POS_CBLAS] += (te - ts); 
#endif
   } else {
	   extern int CBLAS_CallFromC;
	   extern int RowMajorStrg;
	   RowMajorStrg = 0;

	   CBLAS_CallFromC = 1;
	   if (order == CblasColMajor)
	   {
	      if (Uplo == CblasUpper) UL = 'U';
	      else if (Uplo == CblasLower) UL = 'L';
	      else 
	      {
		 cblas_xerbla(2, "cblas_dsbmv","Illegal Uplo setting, %d\n",Uplo );
		 CBLAS_CallFromC = 0;
		 RowMajorStrg = 0;
		 return;
	      }
	      F77_dsbmv(F77_UL, &F77_N, &F77_K, &alpha, A, &F77_lda, X,  
			     &F77_incX, &beta, Y, &F77_incY);
	   }
	   else if (order == CblasRowMajor)
	   {
	      RowMajorStrg = 1;
	      if (Uplo == CblasUpper) UL = 'L';
	      else if (Uplo == CblasLower) UL = 'U';
	      else 
	      {
		 cblas_xerbla(2, "cblas_dsbmv","Illegal Uplo setting, %d\n", Uplo);
		 CBLAS_CallFromC = 0;
		 RowMajorStrg = 0;
		 return;
	      }
	      F77_dsbmv(F77_UL, &F77_N, &F77_K, &alpha, 
			     A ,&F77_lda, X,&F77_incX, &beta, Y, &F77_incY);
	   }
	   else cblas_xerbla(1, "cblas_dsbmv", "Illegal Order setting, %d\n", order);
	   CBLAS_CallFromC = 0;
	   RowMajorStrg = 0;
   }
   return;
}
