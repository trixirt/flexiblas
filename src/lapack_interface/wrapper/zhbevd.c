/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Martin Koehler, 2013-2020
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Wed Mar 28 11:20:04 2018 */
        
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "fortran_mangle.h"

#include "flexiblas.h"


#ifdef INTEGER8
#define blasint int64_t
#else
#define blasint int
#endif



static TLS_STORE uint8_t hook_pos_zhbevd = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zhbevd,ZHBEVD)(char* jobz, char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* w, double complex* z, blasint* ldz, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info)
#else
void FC_GLOBAL(zhbevd,ZHBEVD)(char* jobz, char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* w, double complex* z, blasint* ldz, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info)
#endif
{
	void (*fn) (void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);
	void (*fn_hook) (void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.zhbevd.f77_blas_function; 
	fn_hook = __flexiblas_hooks->zhbevd.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) jobz, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info); 
		return;
	} else {
		hook_pos_zhbevd = 0;
		fn_hook((void*) jobz, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zhbevd_(char* jobz, char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* w, double complex* z, blasint* ldz, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zhbevd,ZHBEVD)))));
#else
void zhbevd(char* jobz, char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* w, double complex* z, blasint* ldz, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zhbevd,ZHBEVD)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zhbevd_(void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)
{
	void (*fn) (void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);

	fn = current_backend->lapack.zhbevd.f77_blas_function; 

		fn((void*) jobz, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info); 

	return;
}

void flexiblas_real_zhbevd(void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)  __attribute__((alias("flexiblas_real_zhbevd_")));





/* Chainloader for Hooks */


void flexiblas_chain_zhbevd_(void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)
{
	void (*fn) (void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);
	void (*fn_hook) (void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);

	fn      = current_backend->lapack.zhbevd.f77_blas_function; 

    hook_pos_zhbevd ++;
    if( hook_pos_zhbevd < __flexiblas_hooks->zhbevd.nhook) {
        fn_hook = __flexiblas_hooks->zhbevd.f77_hook_function[hook_pos_zhbevd];
        fn_hook((void*) jobz, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info);
    } else {
        hook_pos_zhbevd = 0;
		fn((void*) jobz, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_zhbevd(void* jobz, void* uplo, void* n, void* kd, void* ab, void* ldab, void* w, void* z, void* ldz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)  __attribute__((alias("flexiblas_chain_zhbevd_")));



