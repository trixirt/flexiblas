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
 /* Generated: Wed Mar 28 11:20:03 2018 */
        
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



static TLS_STORE uint8_t hook_pos_chetd2 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(chetd2,CHETD2)(char* uplo, blasint* n, float complex* a, blasint* lda, float* d, float* e, float complex* tau, blasint* info)
#else
void FC_GLOBAL(chetd2,CHETD2)(char* uplo, blasint* n, float complex* a, blasint* lda, float* d, float* e, float complex* tau, blasint* info)
#endif
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info);
	void (*fn_hook) (void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.chetd2.f77_blas_function; 
	fn_hook = __flexiblas_hooks->chetd2.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) d, (void*) e, (void*) tau, (void*) info); 
		return;
	} else {
		hook_pos_chetd2 = 0;
		fn_hook((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) d, (void*) e, (void*) tau, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void chetd2_(char* uplo, blasint* n, float complex* a, blasint* lda, float* d, float* e, float complex* tau, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(chetd2,CHETD2)))));
#else
void chetd2(char* uplo, blasint* n, float complex* a, blasint* lda, float* d, float* e, float complex* tau, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(chetd2,CHETD2)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_chetd2_(void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info)
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info);

	fn = current_backend->lapack.chetd2.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) d, (void*) e, (void*) tau, (void*) info); 

	return;
}

void flexiblas_real_chetd2(void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info)  __attribute__((alias("flexiblas_real_chetd2_")));





/* Chainloader for Hooks */


void flexiblas_chain_chetd2_(void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info)
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info);
	void (*fn_hook) (void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info);

	fn      = current_backend->lapack.chetd2.f77_blas_function; 

    hook_pos_chetd2 ++;
    if( hook_pos_chetd2 < __flexiblas_hooks->chetd2.nhook) {
        fn_hook = __flexiblas_hooks->chetd2.f77_hook_function[hook_pos_chetd2];
        fn_hook((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) d, (void*) e, (void*) tau, (void*) info);
    } else {
        hook_pos_chetd2 = 0;
		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) d, (void*) e, (void*) tau, (void*) info); 
	}
	return;
}

void flexiblas_chain_chetd2(void* uplo, void* n, void* a, void* lda, void* d, void* e, void* tau, void* info)  __attribute__((alias("flexiblas_chain_chetd2_")));



