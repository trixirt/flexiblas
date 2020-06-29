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



static TLS_STORE uint8_t hook_pos_dlaexc = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlaexc,DLAEXC)(blasint* wantq, blasint* n, double* t, blasint* ldt, double* q, blasint* ldq, blasint* j1, blasint* n1, blasint* n2, double* work, blasint* info)
#else
void FC_GLOBAL(dlaexc,DLAEXC)(blasint* wantq, blasint* n, double* t, blasint* ldt, double* q, blasint* ldq, blasint* j1, blasint* n1, blasint* n2, double* work, blasint* info)
#endif
{
	void (*fn) (void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info);
	void (*fn_hook) (void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dlaexc.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dlaexc.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) wantq, (void*) n, (void*) t, (void*) ldt, (void*) q, (void*) ldq, (void*) j1, (void*) n1, (void*) n2, (void*) work, (void*) info); 
		return;
	} else {
		hook_pos_dlaexc = 0;
		fn_hook((void*) wantq, (void*) n, (void*) t, (void*) ldt, (void*) q, (void*) ldq, (void*) j1, (void*) n1, (void*) n2, (void*) work, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlaexc_(blasint* wantq, blasint* n, double* t, blasint* ldt, double* q, blasint* ldq, blasint* j1, blasint* n1, blasint* n2, double* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaexc,DLAEXC)))));
#else
void dlaexc(blasint* wantq, blasint* n, double* t, blasint* ldt, double* q, blasint* ldq, blasint* j1, blasint* n1, blasint* n2, double* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaexc,DLAEXC)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlaexc_(void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info)
{
	void (*fn) (void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info);

	fn = current_backend->lapack.dlaexc.f77_blas_function; 

		fn((void*) wantq, (void*) n, (void*) t, (void*) ldt, (void*) q, (void*) ldq, (void*) j1, (void*) n1, (void*) n2, (void*) work, (void*) info); 

	return;
}

void flexiblas_real_dlaexc(void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info)  __attribute__((alias("flexiblas_real_dlaexc_")));





/* Chainloader for Hooks */


void flexiblas_chain_dlaexc_(void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info)
{
	void (*fn) (void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info);
	void (*fn_hook) (void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info);

	fn      = current_backend->lapack.dlaexc.f77_blas_function; 

    hook_pos_dlaexc ++;
    if( hook_pos_dlaexc < __flexiblas_hooks->dlaexc.nhook) {
        fn_hook = __flexiblas_hooks->dlaexc.f77_hook_function[hook_pos_dlaexc];
        fn_hook((void*) wantq, (void*) n, (void*) t, (void*) ldt, (void*) q, (void*) ldq, (void*) j1, (void*) n1, (void*) n2, (void*) work, (void*) info);
    } else {
        hook_pos_dlaexc = 0;
		fn((void*) wantq, (void*) n, (void*) t, (void*) ldt, (void*) q, (void*) ldq, (void*) j1, (void*) n1, (void*) n2, (void*) work, (void*) info); 
	}
	return;
}

void flexiblas_chain_dlaexc(void* wantq, void* n, void* t, void* ldt, void* q, void* ldq, void* j1, void* n1, void* n2, void* work, void* info)  __attribute__((alias("flexiblas_chain_dlaexc_")));



