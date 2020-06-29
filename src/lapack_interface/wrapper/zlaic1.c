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
 /* Generated: Wed Mar 28 11:20:05 2018 */
        
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



static TLS_STORE uint8_t hook_pos_zlaic1 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zlaic1,ZLAIC1)(blasint* job, blasint* j, double complex* x, double* sest, double complex* w, double complex* gamma, double* sestpr, double complex* s, double complex* c)
#else
void FC_GLOBAL(zlaic1,ZLAIC1)(blasint* job, blasint* j, double complex* x, double* sest, double complex* w, double complex* gamma, double* sestpr, double complex* s, double complex* c)
#endif
{
	void (*fn) (void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c);
	void (*fn_hook) (void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.zlaic1.f77_blas_function; 
	fn_hook = __flexiblas_hooks->zlaic1.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) job, (void*) j, (void*) x, (void*) sest, (void*) w, (void*) gamma, (void*) sestpr, (void*) s, (void*) c); 
		return;
	} else {
		hook_pos_zlaic1 = 0;
		fn_hook((void*) job, (void*) j, (void*) x, (void*) sest, (void*) w, (void*) gamma, (void*) sestpr, (void*) s, (void*) c);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zlaic1_(blasint* job, blasint* j, double complex* x, double* sest, double complex* w, double complex* gamma, double* sestpr, double complex* s, double complex* c) __attribute__((alias(MTS(FC_GLOBAL(zlaic1,ZLAIC1)))));
#else
void zlaic1(blasint* job, blasint* j, double complex* x, double* sest, double complex* w, double complex* gamma, double* sestpr, double complex* s, double complex* c) __attribute__((alias(MTS(FC_GLOBAL(zlaic1,ZLAIC1)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zlaic1_(void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c)
{
	void (*fn) (void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c);

	fn = current_backend->lapack.zlaic1.f77_blas_function; 

		fn((void*) job, (void*) j, (void*) x, (void*) sest, (void*) w, (void*) gamma, (void*) sestpr, (void*) s, (void*) c); 

	return;
}

void flexiblas_real_zlaic1(void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c)  __attribute__((alias("flexiblas_real_zlaic1_")));





/* Chainloader for Hooks */


void flexiblas_chain_zlaic1_(void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c)
{
	void (*fn) (void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c);
	void (*fn_hook) (void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c);

	fn      = current_backend->lapack.zlaic1.f77_blas_function; 

    hook_pos_zlaic1 ++;
    if( hook_pos_zlaic1 < __flexiblas_hooks->zlaic1.nhook) {
        fn_hook = __flexiblas_hooks->zlaic1.f77_hook_function[hook_pos_zlaic1];
        fn_hook((void*) job, (void*) j, (void*) x, (void*) sest, (void*) w, (void*) gamma, (void*) sestpr, (void*) s, (void*) c);
    } else {
        hook_pos_zlaic1 = 0;
		fn((void*) job, (void*) j, (void*) x, (void*) sest, (void*) w, (void*) gamma, (void*) sestpr, (void*) s, (void*) c); 
	}
	return;
}

void flexiblas_chain_zlaic1(void* job, void* j, void* x, void* sest, void* w, void* gamma, void* sestpr, void* s, void* c)  __attribute__((alias("flexiblas_chain_zlaic1_")));



