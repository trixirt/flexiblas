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



static TLS_STORE uint8_t hook_pos_zbdsqr = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zbdsqr,ZBDSQR)(char* uplo, blasint* n, blasint* ncvt, blasint* nru, blasint* ncc, double* d, double* e, double complex* vt, blasint* ldvt, double complex* u, blasint* ldu, double complex* c, blasint* ldc, double* rwork, blasint* info)
#else
void FC_GLOBAL(zbdsqr,ZBDSQR)(char* uplo, blasint* n, blasint* ncvt, blasint* nru, blasint* ncc, double* d, double* e, double complex* vt, blasint* ldvt, double complex* u, blasint* ldu, double complex* c, blasint* ldc, double* rwork, blasint* info)
#endif
{
	void (*fn) (void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info);
	void (*fn_hook) (void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.zbdsqr.f77_blas_function; 
	fn_hook = __flexiblas_hooks->zbdsqr.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) ncvt, (void*) nru, (void*) ncc, (void*) d, (void*) e, (void*) vt, (void*) ldvt, (void*) u, (void*) ldu, (void*) c, (void*) ldc, (void*) rwork, (void*) info); 
		return;
	} else {
		hook_pos_zbdsqr = 0;
		fn_hook((void*) uplo, (void*) n, (void*) ncvt, (void*) nru, (void*) ncc, (void*) d, (void*) e, (void*) vt, (void*) ldvt, (void*) u, (void*) ldu, (void*) c, (void*) ldc, (void*) rwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zbdsqr_(char* uplo, blasint* n, blasint* ncvt, blasint* nru, blasint* ncc, double* d, double* e, double complex* vt, blasint* ldvt, double complex* u, blasint* ldu, double complex* c, blasint* ldc, double* rwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zbdsqr,ZBDSQR)))));
#else
void zbdsqr(char* uplo, blasint* n, blasint* ncvt, blasint* nru, blasint* ncc, double* d, double* e, double complex* vt, blasint* ldvt, double complex* u, blasint* ldu, double complex* c, blasint* ldc, double* rwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zbdsqr,ZBDSQR)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zbdsqr_(void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info)
{
	void (*fn) (void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info);

	fn = current_backend->lapack.zbdsqr.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) ncvt, (void*) nru, (void*) ncc, (void*) d, (void*) e, (void*) vt, (void*) ldvt, (void*) u, (void*) ldu, (void*) c, (void*) ldc, (void*) rwork, (void*) info); 

	return;
}

void flexiblas_real_zbdsqr(void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info)  __attribute__((alias("flexiblas_real_zbdsqr_")));





/* Chainloader for Hooks */


void flexiblas_chain_zbdsqr_(void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info)
{
	void (*fn) (void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info);
	void (*fn_hook) (void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info);

	fn      = current_backend->lapack.zbdsqr.f77_blas_function; 

    hook_pos_zbdsqr ++;
    if( hook_pos_zbdsqr < __flexiblas_hooks->zbdsqr.nhook) {
        fn_hook = __flexiblas_hooks->zbdsqr.f77_hook_function[hook_pos_zbdsqr];
        fn_hook((void*) uplo, (void*) n, (void*) ncvt, (void*) nru, (void*) ncc, (void*) d, (void*) e, (void*) vt, (void*) ldvt, (void*) u, (void*) ldu, (void*) c, (void*) ldc, (void*) rwork, (void*) info);
    } else {
        hook_pos_zbdsqr = 0;
		fn((void*) uplo, (void*) n, (void*) ncvt, (void*) nru, (void*) ncc, (void*) d, (void*) e, (void*) vt, (void*) ldvt, (void*) u, (void*) ldu, (void*) c, (void*) ldc, (void*) rwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_zbdsqr(void* uplo, void* n, void* ncvt, void* nru, void* ncc, void* d, void* e, void* vt, void* ldvt, void* u, void* ldu, void* c, void* ldc, void* rwork, void* info)  __attribute__((alias("flexiblas_chain_zbdsqr_")));



