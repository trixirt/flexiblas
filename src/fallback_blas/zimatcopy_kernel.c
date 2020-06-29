
void FC_GLOBAL(somatcopy,SOMATCOPY)( char* ORDER, char* TRANS, Int *rows, Int *cols, float *alpha, float *a, Int *lda, float *b, Int *ldb);
void FC_GLOBAL(domatcopy,DOMATCOPY)( char* ORDER, char* TRANS, Int *rows, Int *cols, double *alpha, double *a, Int *lda, double *b, Int *ldb);
void FC_GLOBAL(comatcopy,COMATCOPY)( char* ORDER, char* TRANS, Int *rows, Int *cols, float complex *alpha, float complex *a, Int *lda, float complex *b, Int *ldb);
void FC_GLOBAL(zomatcopy,ZOMATCOPY)( char* ORDER, char* TRANS, Int *rows, Int *cols, double complex *alpha, double complex *a, Int *lda, double complex *b, Int *ldb);
void FC_GLOBAL(xerbla,XERBLA)(char *name, Int *info, Int len);

void FNAME( char* ORDER, char* TRANS, Int *rows, Int *cols, FLOAT *alpha, FLOAT *a, Int *lda, Int *ldb)
{

	char Order, Trans;
	Int info = -1;
	FLOAT *b;
	size_t msize;
	Int i,j;
	Int _rows, _cols, _lda, _ldb;
	FLOAT _alpha;
	FLOAT _temp;

	Order = toupper(*ORDER);
	Trans = toupper(*TRANS);

	if ( Order != 'C' && Order != 'R' ) {
		info = 1;
	} else if ( Trans != 'N' && Trans != 'R'
		&& Trans != 'T'
		&& Trans != 'C' ) {
		info = 2;
	} else if ( *rows <= 0 ) {
		info = 3;
	} else if ( *cols <= 0 ) {
		info = 4;
	} else if ( ( Order == 'C' && *lda < *rows ) || (Order == 'R' && *lda < *cols )){
		info = 7;
	}
	if ( Order == 'C')
	{
        	if ( (Trans == 'N' || Trans == 'R')  &&  *ldb < *rows ) info = 9;
        	if ( (Trans == 'T' || Trans == 'C')  &&  *ldb < *cols ) info = 9;
	}
	if ( Order == 'R')
	{
        	if ( (Trans == 'N' || Trans == 'R' ) &&  *ldb < *cols ) info = 9;
        	if ( (Trans == 'T' || Trans == 'C' ) &&  *ldb < *rows ) info = 9;
	}

	if (info >= 0) {
    		FC_GLOBAL(xerbla,XERBLA)( ENAME , &info, strlen(ENAME));
    		return;
  	}

	_rows = *rows;
	_cols = *cols;
	_lda  = *lda;
	_ldb  = *ldb;
	_alpha = *alpha;


	if ( _lda >  _ldb )
                msize = (_lda) * (_ldb)  * sizeof(FLOAT) ;
        else
                msize = (_ldb) * (_ldb)  * sizeof(FLOAT) ;

        b = malloc(msize);
        if ( b == NULL )
        {
                printf("Memory alloc failed\n");
                exit(1);
        }

	if ( _rows == _cols
			&& _lda == _ldb)
	{
		if (Trans == 'N' ) {
			if (Order == 'C') {
				for (i = 0; i < _cols; i++) {
					for(j = 0; j < _rows; j++) {
						a[j+i*(_lda)] *= (_alpha);
					}
				}
			} else {
				for (j = 0; j < _rows; j++) {
					for (i = 0; i < _cols; i++) {
						a[j*_lda+i] *= _alpha;
					}
				}
			}
		}
		else if ( Trans == 'R')
		{
			if (Order == 'C') {
				for (i = 0; i < _cols; i++) {
					for(j = 0; j < _rows; j++) {
						a[j+i*(_lda)] = (_alpha) * conj(a[j+i*(_lda)] );
					}
				}
			} else {
				for (j = 0; j < _rows; j++) {
					for (i = 0; i < _cols; i++) {
						a[j*_lda+i] = _alpha *conj(a[j*_lda+i]);
					}
				}
			}
		}
		else if ( Trans == 'T')
		{
			if (Order == 'C') {
				for (i = 0; i < _cols; i++) {
					a[i+i*_lda] *= _alpha;
					for (j = i+1; j < _rows; j++) {
						_temp = a[i+j*_lda];
						a[i+j*_lda] = _alpha * a[j+i*_lda];
						a[j+i*_lda] = _alpha * _temp;
					}
				}

			} else {
				for (i = 0; i < _rows; i++) {
					a[i+i*_lda] *= _alpha;
					for (j = i+1; j < _cols; j++) {
						_temp = a[i+j*_lda];
						a[i+j*_lda] = _alpha * a[j+i*_lda];
						a[j+i*_lda] = _alpha * _temp;
					}
				}
			}
		} else {
			if (Order == 'C') {
				for (i = 0; i < _cols; i++) {
					a[i+i*_lda] = _alpha * conj(a[i+i*_lda]);
					for (j = i+1; j < _rows; j++) {
						_temp = a[i+j*_lda];
						a[i+j*_lda] = _alpha * conj(a[j+i*_lda]);
						a[j+i*_lda] = _alpha * conj(_temp);
					}
				}

			} else {
				for (i = 0; i < _rows; i++) {
					a[i+i*_lda] = _alpha * conj(a[i+i*_lda]);
					for (j = i+1; j < _cols; j++) {
						_temp = a[i+j*_lda];
						a[i+j*_lda] = _alpha * conj(a[j+i*_lda]);
						a[j+i*_lda] = _alpha * conj(_temp);
					}
				}


			}

		}

		return;
	}


	if ( Order == 'C' )
	{

		if ( Trans =='N'  )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","N", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","N", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );

#endif
			free(b);
			return;
		}
		if ( Trans == 'R' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","R", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","R", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif
			free(b);
			return;
		}
		if ( Trans == 'T' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","T", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","T", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif
			free(b);
			return;
		}
		if ( Trans == 'C' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","C", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","C", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("C","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif

			free(b);
			return;
		}

	}
	else
	{

		if ( Trans == 'N' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","N", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","N", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif
			free(b);
			return;
		}
		if ( Trans == 'R' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","R", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","R", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif
			free(b);
			return;
		}
		if ( Trans == 'T' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","T", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","T", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif
			free(b);
			return;
		}
		if ( Trans == 'C' )
		{
			_temp = (FLOAT) 1.0;
#ifndef _DOUBLE_PRECISION
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","C", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(comatcopy,COMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#else
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","C", rows, cols, alpha, a, lda, b, ldb );
	  		FC_GLOBAL(zomatcopy,ZOMATCOPY)("R","N", rows, cols, &_temp , b, ldb, a, ldb );
#endif
			free(b);
			return;
		}

	}

	return;

}

