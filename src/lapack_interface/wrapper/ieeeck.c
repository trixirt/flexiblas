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



static TLS_STORE uint8_t hook_pos_ieeeck = 0;
#ifdef FLEXIBLAS_ABI_INTEL
int FC_GLOBAL(ieeeck,IEEECK)(blasint* ispec, float* zero, float* one)
#else
int FC_GLOBAL(ieeeck,IEEECK)(blasint* ispec, float* zero, float* one)
#endif
{
	blasint (*fn) (void* ispec, void* zero, void* one);
	blasint (*fn_hook) (void* ispec, void* zero, void* one);
	blasint ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.ieeeck.f77_blas_function; 
	fn_hook = __flexiblas_hooks->ieeeck.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) ispec, (void*) zero, (void*) one); 
		return ret; 
	} else {
		hook_pos_ieeeck = 0;
		ret=fn_hook((void*) ispec, (void*) zero, (void*) one);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
int ieeeck_(blasint* ispec, float* zero, float* one) __attribute__((alias(MTS(FC_GLOBAL(ieeeck,IEEECK)))));
#else
int ieeeck(blasint* ispec, float* zero, float* one) __attribute__((alias(MTS(FC_GLOBAL(ieeeck,IEEECK)))));
#endif




/* Real Implementation for Hooks */


blasint flexiblas_real_ieeeck_(void* ispec, void* zero, void* one)
{
	blasint (*fn) (void* ispec, void* zero, void* one);
	blasint ret;

	fn = current_backend->lapack.ieeeck.f77_blas_function; 

		ret = fn((void*) ispec, (void*) zero, (void*) one); 

	return ret ;
}

blasint flexiblas_real_ieeeck(void* ispec, void* zero, void* one)  __attribute__((alias("flexiblas_real_ieeeck_")));





/* Chainloader for Hooks */


blasint flexiblas_chain_ieeeck_(void* ispec, void* zero, void* one)
{
	blasint (*fn) (void* ispec, void* zero, void* one);
	blasint (*fn_hook) (void* ispec, void* zero, void* one);
	blasint ret;

	fn      = current_backend->lapack.ieeeck.f77_blas_function; 

    hook_pos_ieeeck ++;
    if( hook_pos_ieeeck < __flexiblas_hooks->ieeeck.nhook) {
        fn_hook = __flexiblas_hooks->ieeeck.f77_hook_function[hook_pos_ieeeck];
        ret = fn_hook((void*) ispec, (void*) zero, (void*) one);
    } else {
        hook_pos_ieeeck = 0;
		ret = fn((void*) ispec, (void*) zero, (void*) one); 
	}
	return ret ;
}

blasint flexiblas_chain_ieeeck(void* ispec, void* zero, void* one)  __attribute__((alias("flexiblas_chain_ieeeck_")));



