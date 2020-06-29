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



static TLS_STORE uint8_t hook_pos_ctptri = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ctptri,CTPTRI)(char* uplo, char* diag, blasint* n, float complex* ap, blasint* info)
#else
void FC_GLOBAL(ctptri,CTPTRI)(char* uplo, char* diag, blasint* n, float complex* ap, blasint* info)
#endif
{
	void (*fn) (void* uplo, void* diag, void* n, void* ap, void* info);
	void (*fn_hook) (void* uplo, void* diag, void* n, void* ap, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.ctptri.f77_blas_function; 
	fn_hook = __flexiblas_hooks->ctptri.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) diag, (void*) n, (void*) ap, (void*) info); 
		return;
	} else {
		hook_pos_ctptri = 0;
		fn_hook((void*) uplo, (void*) diag, (void*) n, (void*) ap, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ctptri_(char* uplo, char* diag, blasint* n, float complex* ap, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ctptri,CTPTRI)))));
#else
void ctptri(char* uplo, char* diag, blasint* n, float complex* ap, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ctptri,CTPTRI)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ctptri_(void* uplo, void* diag, void* n, void* ap, void* info)
{
	void (*fn) (void* uplo, void* diag, void* n, void* ap, void* info);

	fn = current_backend->lapack.ctptri.f77_blas_function; 

		fn((void*) uplo, (void*) diag, (void*) n, (void*) ap, (void*) info); 

	return;
}

void flexiblas_real_ctptri(void* uplo, void* diag, void* n, void* ap, void* info)  __attribute__((alias("flexiblas_real_ctptri_")));





/* Chainloader for Hooks */


void flexiblas_chain_ctptri_(void* uplo, void* diag, void* n, void* ap, void* info)
{
	void (*fn) (void* uplo, void* diag, void* n, void* ap, void* info);
	void (*fn_hook) (void* uplo, void* diag, void* n, void* ap, void* info);

	fn      = current_backend->lapack.ctptri.f77_blas_function; 

    hook_pos_ctptri ++;
    if( hook_pos_ctptri < __flexiblas_hooks->ctptri.nhook) {
        fn_hook = __flexiblas_hooks->ctptri.f77_hook_function[hook_pos_ctptri];
        fn_hook((void*) uplo, (void*) diag, (void*) n, (void*) ap, (void*) info);
    } else {
        hook_pos_ctptri = 0;
		fn((void*) uplo, (void*) diag, (void*) n, (void*) ap, (void*) info); 
	}
	return;
}

void flexiblas_chain_ctptri(void* uplo, void* diag, void* n, void* ap, void* info)  __attribute__((alias("flexiblas_chain_ctptri_")));



