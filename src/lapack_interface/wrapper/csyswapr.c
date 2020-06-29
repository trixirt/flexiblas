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



static TLS_STORE uint8_t hook_pos_csyswapr = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(csyswapr,CSYSWAPR)(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* i1, blasint* i2)
#else
void FC_GLOBAL(csyswapr,CSYSWAPR)(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* i1, blasint* i2)
#endif
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* i1, void* i2);
	void (*fn_hook) (void* uplo, void* n, void* a, void* lda, void* i1, void* i2);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.csyswapr.f77_blas_function; 
	fn_hook = __flexiblas_hooks->csyswapr.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) i1, (void*) i2); 
		return;
	} else {
		hook_pos_csyswapr = 0;
		fn_hook((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) i1, (void*) i2);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void csyswapr_(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* i1, blasint* i2) __attribute__((alias(MTS(FC_GLOBAL(csyswapr,CSYSWAPR)))));
#else
void csyswapr(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* i1, blasint* i2) __attribute__((alias(MTS(FC_GLOBAL(csyswapr,CSYSWAPR)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_csyswapr_(void* uplo, void* n, void* a, void* lda, void* i1, void* i2)
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* i1, void* i2);

	fn = current_backend->lapack.csyswapr.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) i1, (void*) i2); 

	return;
}

void flexiblas_real_csyswapr(void* uplo, void* n, void* a, void* lda, void* i1, void* i2)  __attribute__((alias("flexiblas_real_csyswapr_")));





/* Chainloader for Hooks */


void flexiblas_chain_csyswapr_(void* uplo, void* n, void* a, void* lda, void* i1, void* i2)
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* i1, void* i2);
	void (*fn_hook) (void* uplo, void* n, void* a, void* lda, void* i1, void* i2);

	fn      = current_backend->lapack.csyswapr.f77_blas_function; 

    hook_pos_csyswapr ++;
    if( hook_pos_csyswapr < __flexiblas_hooks->csyswapr.nhook) {
        fn_hook = __flexiblas_hooks->csyswapr.f77_hook_function[hook_pos_csyswapr];
        fn_hook((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) i1, (void*) i2);
    } else {
        hook_pos_csyswapr = 0;
		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) i1, (void*) i2); 
	}
	return;
}

void flexiblas_chain_csyswapr(void* uplo, void* n, void* a, void* lda, void* i1, void* i2)  __attribute__((alias("flexiblas_chain_csyswapr_")));



