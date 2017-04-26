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

void cblas_ssyr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                const int N, const float  alpha, const float  *X,
                const int incX, const float  *Y, const int incY, float  *A,
                const int lda)
{
   char UL;
   #define F77_UL &UL

#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX, F77_incY=incY, F77__lda=lda;
#else
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   #define F77_lda  lda
#endif
#ifdef FLEXIBLAS_PROFILE
   flexiblas_call_ssyr2[POS_CBLAS] ++;
#endif 

   if ( flexiblas_ssyr2.call_cblas != NULL ) {
#ifdef FLEXIBLAS_PROFILE
	   double te, ts = flexiblas_wtime(); 
#endif
	   void (*fn)
		 (const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                const int N, const float  alpha, const float  *X,
                const int incX, const float  *Y, const int incY, float  *A,
                const int lda)
		   = flexiblas_ssyr2.call_cblas;
	fn(order,Uplo,N,alpha,X,incX,Y,incY,A,lda);
#ifdef FLEXIBLAS_PROFILE
	   te = flexiblas_wtime(); 
	   flexiblas_time_ssyr2[POS_CBLAS] += (te - ts); 
#endif
   } else {

	   extern int CBLAS_CallFromC;
	   extern int RowMajorStrg;
	   RowMajorStrg = 0;
	   CBLAS_CallFromC = 1;
	   if (order == CblasColMajor)
	   {
	      if (Uplo == CblasLower) UL = 'L';
	      else if (Uplo == CblasUpper) UL = 'U';
	      else 
	      {
		 cblas_xerbla(2, "cblas_ssyr2","Illegal Uplo setting, %d\n",Uplo );
		 CBLAS_CallFromC = 0;
		 RowMajorStrg = 0;
		 return;
	      }
	      #ifdef F77_CHAR
		 F77_UL = C2F_CHAR(&UL);
	      #endif

	      F77_ssyr2(F77_UL, &F77_N, &alpha, X, &F77_incX, Y, &F77_incY, A, 
			    &F77_lda);

	   }  else if (order == CblasRowMajor) 
	   {
	      RowMajorStrg = 1;
	      if (Uplo == CblasLower) UL = 'U';
	      else if (Uplo == CblasUpper) UL = 'L';
	      else 
	      {
		 cblas_xerbla(2, "cblas_ssyr2","Illegal Uplo setting, %d\n",Uplo );
		 CBLAS_CallFromC = 0;
		 RowMajorStrg = 0;
		 return;
	      }
	      #ifdef F77_CHAR
		 F77_UL = C2F_CHAR(&UL);
	      #endif  
	      F77_ssyr2(F77_UL, &F77_N, &alpha, X, &F77_incX, Y, &F77_incY,  A, 
			    &F77_lda); 
	   } else cblas_xerbla(1, "cblas_ssyr2", "Illegal Order setting, %d\n", order);
	   CBLAS_CallFromC = 0;
	   RowMajorStrg = 0;
   }
   return;
}
