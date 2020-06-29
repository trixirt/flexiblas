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



static TLS_STORE uint8_t hook_pos_slansb = 0;
#ifdef FLEXIBLAS_ABI_INTEL
float FC_GLOBAL(slansb,SLANSB)(char* norm, char* uplo, blasint* n, blasint* k, float* ab, blasint* ldab, float* work)
#else
float FC_GLOBAL(slansb,SLANSB)(char* norm, char* uplo, blasint* n, blasint* k, float* ab, blasint* ldab, float* work)
#endif
{
	float (*fn) (void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work);
	float (*fn_hook) (void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work);
	float ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.slansb.f77_blas_function; 
	fn_hook = __flexiblas_hooks->slansb.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work); 
		return ret; 
	} else {
		hook_pos_slansb = 0;
		ret=fn_hook((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
float slansb_(char* norm, char* uplo, blasint* n, blasint* k, float* ab, blasint* ldab, float* work) __attribute__((alias(MTS(FC_GLOBAL(slansb,SLANSB)))));
#else
float slansb(char* norm, char* uplo, blasint* n, blasint* k, float* ab, blasint* ldab, float* work) __attribute__((alias(MTS(FC_GLOBAL(slansb,SLANSB)))));
#endif




/* Real Implementation for Hooks */


float flexiblas_real_slansb_(void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work)
{
	float (*fn) (void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work);
	float ret;

	fn = current_backend->lapack.slansb.f77_blas_function; 

		ret = fn((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work); 

	return ret ;
}

float flexiblas_real_slansb(void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work)  __attribute__((alias("flexiblas_real_slansb_")));





/* Chainloader for Hooks */


float flexiblas_chain_slansb_(void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work)
{
	float (*fn) (void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work);
	float (*fn_hook) (void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work);
	float ret;

	fn      = current_backend->lapack.slansb.f77_blas_function; 

    hook_pos_slansb ++;
    if( hook_pos_slansb < __flexiblas_hooks->slansb.nhook) {
        fn_hook = __flexiblas_hooks->slansb.f77_hook_function[hook_pos_slansb];
        ret = fn_hook((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work);
    } else {
        hook_pos_slansb = 0;
		ret = fn((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work); 
	}
	return ret ;
}

float flexiblas_chain_slansb(void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work)  __attribute__((alias("flexiblas_chain_slansb_")));



