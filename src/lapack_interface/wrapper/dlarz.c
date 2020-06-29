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



static TLS_STORE uint8_t hook_pos_dlarz = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlarz,DLARZ)(char* side, blasint* m, blasint* n, blasint* l, double* v, blasint* incv, double* tau, double* c, blasint* ldc, double* work)
#else
void FC_GLOBAL(dlarz,DLARZ)(char* side, blasint* m, blasint* n, blasint* l, double* v, blasint* incv, double* tau, double* c, blasint* ldc, double* work)
#endif
{
	void (*fn) (void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work);
	void (*fn_hook) (void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dlarz.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dlarz.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) side, (void*) m, (void*) n, (void*) l, (void*) v, (void*) incv, (void*) tau, (void*) c, (void*) ldc, (void*) work); 
		return;
	} else {
		hook_pos_dlarz = 0;
		fn_hook((void*) side, (void*) m, (void*) n, (void*) l, (void*) v, (void*) incv, (void*) tau, (void*) c, (void*) ldc, (void*) work);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlarz_(char* side, blasint* m, blasint* n, blasint* l, double* v, blasint* incv, double* tau, double* c, blasint* ldc, double* work) __attribute__((alias(MTS(FC_GLOBAL(dlarz,DLARZ)))));
#else
void dlarz(char* side, blasint* m, blasint* n, blasint* l, double* v, blasint* incv, double* tau, double* c, blasint* ldc, double* work) __attribute__((alias(MTS(FC_GLOBAL(dlarz,DLARZ)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlarz_(void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work)
{
	void (*fn) (void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work);

	fn = current_backend->lapack.dlarz.f77_blas_function; 

		fn((void*) side, (void*) m, (void*) n, (void*) l, (void*) v, (void*) incv, (void*) tau, (void*) c, (void*) ldc, (void*) work); 

	return;
}

void flexiblas_real_dlarz(void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work)  __attribute__((alias("flexiblas_real_dlarz_")));





/* Chainloader for Hooks */


void flexiblas_chain_dlarz_(void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work)
{
	void (*fn) (void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work);
	void (*fn_hook) (void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work);

	fn      = current_backend->lapack.dlarz.f77_blas_function; 

    hook_pos_dlarz ++;
    if( hook_pos_dlarz < __flexiblas_hooks->dlarz.nhook) {
        fn_hook = __flexiblas_hooks->dlarz.f77_hook_function[hook_pos_dlarz];
        fn_hook((void*) side, (void*) m, (void*) n, (void*) l, (void*) v, (void*) incv, (void*) tau, (void*) c, (void*) ldc, (void*) work);
    } else {
        hook_pos_dlarz = 0;
		fn((void*) side, (void*) m, (void*) n, (void*) l, (void*) v, (void*) incv, (void*) tau, (void*) c, (void*) ldc, (void*) work); 
	}
	return;
}

void flexiblas_chain_dlarz(void* side, void* m, void* n, void* l, void* v, void* incv, void* tau, void* c, void* ldc, void* work)  __attribute__((alias("flexiblas_chain_dlarz_")));



