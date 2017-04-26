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

void cblas_zgemv(const enum CBLAS_ORDER order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const void *alpha, const void  *A, const int lda,
                 const void  *X, const int incX, const void *beta,
                 void  *Y, const int incY)
{
   char TA;
   #define F77_TA &TA   
#ifdef F77_INT
   F77_INT F77_M=M, F77_N=N, F77_lda=lda, F77_incX=incX, F77_incY=incY;
#else
   #define F77_M M
   #define F77_N N
   #define F77_lda lda
   #define F77_incX incx
   #define F77_incY incY
#endif
#ifdef FLEXIBLAS_PROFILE
   flexiblas_call_zgemv[POS_CBLAS] ++;
#endif 

   if ( flexiblas_zgemv.call_cblas != NULL ) {
#ifdef FLEXIBLAS_PROFILE
	   double te, ts = flexiblas_wtime(); 
#endif
	   void (*fn)
		  (const enum CBLAS_ORDER order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const void *alpha, const void  *A, const int lda,
                 const void  *X, const int incX, const void *beta,
                 void  *Y, const int incY)
		   = flexiblas_zgemv.call_cblas;
	fn(order,TransA,M,N,alpha,A,lda,X,incX,beta,Y,incY);
#ifdef FLEXIBLAS_PROFILE
	   te = flexiblas_wtime(); 
	   flexiblas_time_zgemv[POS_CBLAS] += (te - ts); 
#endif
   } else {
	   int n=0, i=0, incx=incX;
	   const double *xx= (const double *)X;
	   double ALPHA[2],BETA[2];
	   int tincY, tincx;
	   double *x=(double *)X, *y=(double *)Y, *st=0, *tx=0;
	   const double *stx = x;
	   extern int CBLAS_CallFromC;
	   extern int RowMajorStrg;
	   RowMajorStrg = 0;

	   CBLAS_CallFromC = 1;

	   if (order == CblasColMajor)
	   {
	      if (TransA == CblasNoTrans) TA = 'N';
	      else if (TransA == CblasTrans) TA = 'T';
	      else if (TransA == CblasConjTrans) TA = 'C';
	      else 
	      {
		 cblas_xerbla(2, "cblas_zgemv","Illegal TransA setting, %d\n", TransA);
		 CBLAS_CallFromC = 0;
		 RowMajorStrg = 0;
		 return;
	      }
	      F77_zgemv(F77_TA, &F77_M, &F77_N, alpha, A, &F77_lda, X, &F77_incX, 
			beta, Y, &F77_incY);
	   }
	   else if (order == CblasRowMajor)
	   {
	      RowMajorStrg = 1;
		 
	      if (TransA == CblasNoTrans) TA = 'T';
	      else if (TransA == CblasTrans) TA = 'N';
	      else if (TransA == CblasConjTrans)
	      {
		 ALPHA[0]=    *( (const double *)  alpha    );
		 ALPHA[1]= -( *( (const double *)  alpha+1) );
		 BETA[0]=     *( (const double *)  beta     );
		 BETA[1]= -(  *( (const double *)  beta+1 ) );
		 TA = 'N';
		 if (M > 0)
		 {
		    n = M << 1;
		    x = malloc(n*sizeof(double));
		    tx = x;
		    if( incX > 0 ) {
		       i = incX << 1 ;
		       tincx = 2;
		       st= x+n;
		    } else { 
		       i = incX *(-2);
		       tincx = -2;
		       st = x-2; 
		       x +=(n-2); 
		    }

		    do
		    {
		       *x = *xx;
		       x[1] = -xx[1];
		       x += tincx ;
		       xx += i;
		    }
		    while (x != st);
		    x=tx;

		    F77_incX = 1;

		    if(incY > 0)
		       tincY = incY; 
		    else
		       tincY = -incY; 

		    y++;

		    if (N > 0)
		    {
		       i = tincY << 1;
		       n = i * N ;
		       st = y + n;
		       do {
			  *y = -(*y);
			  y += i;
		       } while(y != st); 
		       y -= n;
		    }
		    stx = x;
		 }
		 else stx = (const double *)X;
	      }
	      else 
	      {
		 cblas_xerbla(2, "cblas_zgemv","Illegal TransA setting, %d\n", TransA);
		 CBLAS_CallFromC = 0;
		 RowMajorStrg = 0;
		 return;
	      }
	      if (TransA == CblasConjTrans)
		 F77_zgemv(F77_TA, &F77_N, &F77_M, ALPHA, A, &F77_lda, stx,
			&F77_incX, BETA, Y, &F77_incY);
	      else
		 F77_zgemv(F77_TA, &F77_N, &F77_M, alpha, A, &F77_lda, x,
			&F77_incX, beta, Y, &F77_incY);

	      if (TransA == CblasConjTrans)
	      {
		 if (x != (const double *)X) free(x);
		 if (N > 0)
		 {
		    do
		    {
		       *y = -(*y);
		       y += i;
		    }
		    while (y != st);
		 }
	      }
	   }
	   else cblas_xerbla(1, "cblas_zgemv", "Illegal Order setting, %d\n", order);
	   CBLAS_CallFromC = 0;
	   RowMajorStrg = 0;
   }
   return;
}
