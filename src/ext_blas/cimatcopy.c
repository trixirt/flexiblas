#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <complex.h>
#include <stdint.h>


void xerbla_(char *str, int *info, int len); 
static void xerbla64_(char *str, int64_t *info, int len){
	int in = *info; 
	xerbla_(str, &in, len); 
}



#define FNAME fcimatcopy64_
#define ENAME "CIMATCOPY"
#define FLOAT float complex 

#include "zimatcopy_kernel.c"


void fcimatcopy32_(char* ORDER, char* TRANS, int32_t *rows, int32_t *cols, FLOAT *alpha, FLOAT *a, int32_t *lda, int32_t *ldb)
{
	int64_t _rows  = *rows; 
	int64_t _cols  = *cols; 
	int64_t _lda  = *lda; 
	int64_t _ldb  = *ldb; 
	fcimatcopy64_(ORDER, TRANS, &_rows, &_cols, alpha, a, &_lda, &_ldb); 
}
