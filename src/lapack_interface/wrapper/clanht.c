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



static TLS_STORE uint8_t hook_pos_clanht = 0;
#ifdef FLEXIBLAS_ABI_INTEL
float FC_GLOBAL(clanht,CLANHT)(char* norm, blasint* n, float* d, float complex* e)
#else
float FC_GLOBAL(clanht,CLANHT)(char* norm, blasint* n, float* d, float complex* e)
#endif
{
	float (*fn) (void* norm, void* n, void* d, void* e);
	float (*fn_hook) (void* norm, void* n, void* d, void* e);
	float ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.clanht.f77_blas_function; 
	fn_hook = __flexiblas_hooks->clanht.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) norm, (void*) n, (void*) d, (void*) e); 
		return ret; 
	} else {
		hook_pos_clanht = 0;
		ret=fn_hook((void*) norm, (void*) n, (void*) d, (void*) e);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
float clanht_(char* norm, blasint* n, float* d, float complex* e) __attribute__((alias(MTS(FC_GLOBAL(clanht,CLANHT)))));
#else
float clanht(char* norm, blasint* n, float* d, float complex* e) __attribute__((alias(MTS(FC_GLOBAL(clanht,CLANHT)))));
#endif




/* Real Implementation for Hooks */


float flexiblas_real_clanht_(void* norm, void* n, void* d, void* e)
{
	float (*fn) (void* norm, void* n, void* d, void* e);
	float ret;

	fn = current_backend->lapack.clanht.f77_blas_function; 

		ret = fn((void*) norm, (void*) n, (void*) d, (void*) e); 

	return ret ;
}

float flexiblas_real_clanht(void* norm, void* n, void* d, void* e)  __attribute__((alias("flexiblas_real_clanht_")));





/* Chainloader for Hooks */


float flexiblas_chain_clanht_(void* norm, void* n, void* d, void* e)
{
	float (*fn) (void* norm, void* n, void* d, void* e);
	float (*fn_hook) (void* norm, void* n, void* d, void* e);
	float ret;

	fn      = current_backend->lapack.clanht.f77_blas_function; 

    hook_pos_clanht ++;
    if( hook_pos_clanht < __flexiblas_hooks->clanht.nhook) {
        fn_hook = __flexiblas_hooks->clanht.f77_hook_function[hook_pos_clanht];
        ret = fn_hook((void*) norm, (void*) n, (void*) d, (void*) e);
    } else {
        hook_pos_clanht = 0;
		ret = fn((void*) norm, (void*) n, (void*) d, (void*) e); 
	}
	return ret ;
}

float flexiblas_chain_clanht(void* norm, void* n, void* d, void* e)  __attribute__((alias("flexiblas_chain_clanht_")));



