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



static TLS_STORE uint8_t hook_pos_sgesvx = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(sgesvx,SGESVX)(char* fact, char* trans, blasint* n, blasint* nrhs, float* a, blasint* lda, float* af, blasint* ldaf, blasint* ipiv, char* equed, float* r, float* c, float* b, blasint* ldb, float* x, blasint* ldx, float* rcond, float* ferr, float* berr, float* work, blasint* iwork, blasint* info)
#else
void FC_GLOBAL(sgesvx,SGESVX)(char* fact, char* trans, blasint* n, blasint* nrhs, float* a, blasint* lda, float* af, blasint* ldaf, blasint* ipiv, char* equed, float* r, float* c, float* b, blasint* ldb, float* x, blasint* ldx, float* rcond, float* ferr, float* berr, float* work, blasint* iwork, blasint* info)
#endif
{
	void (*fn) (void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info);
	void (*fn_hook) (void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.sgesvx.f77_blas_function; 
	fn_hook = __flexiblas_hooks->sgesvx.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) fact, (void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) af, (void*) ldaf, (void*) ipiv, (void*) equed, (void*) r, (void*) c, (void*) b, (void*) ldb, (void*) x, (void*) ldx, (void*) rcond, (void*) ferr, (void*) berr, (void*) work, (void*) iwork, (void*) info); 
		return;
	} else {
		hook_pos_sgesvx = 0;
		fn_hook((void*) fact, (void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) af, (void*) ldaf, (void*) ipiv, (void*) equed, (void*) r, (void*) c, (void*) b, (void*) ldb, (void*) x, (void*) ldx, (void*) rcond, (void*) ferr, (void*) berr, (void*) work, (void*) iwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void sgesvx_(char* fact, char* trans, blasint* n, blasint* nrhs, float* a, blasint* lda, float* af, blasint* ldaf, blasint* ipiv, char* equed, float* r, float* c, float* b, blasint* ldb, float* x, blasint* ldx, float* rcond, float* ferr, float* berr, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sgesvx,SGESVX)))));
#else
void sgesvx(char* fact, char* trans, blasint* n, blasint* nrhs, float* a, blasint* lda, float* af, blasint* ldaf, blasint* ipiv, char* equed, float* r, float* c, float* b, blasint* ldb, float* x, blasint* ldx, float* rcond, float* ferr, float* berr, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sgesvx,SGESVX)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_sgesvx_(void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info)
{
	void (*fn) (void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info);

	fn = current_backend->lapack.sgesvx.f77_blas_function; 

		fn((void*) fact, (void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) af, (void*) ldaf, (void*) ipiv, (void*) equed, (void*) r, (void*) c, (void*) b, (void*) ldb, (void*) x, (void*) ldx, (void*) rcond, (void*) ferr, (void*) berr, (void*) work, (void*) iwork, (void*) info); 

	return;
}

void flexiblas_real_sgesvx(void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info)  __attribute__((alias("flexiblas_real_sgesvx_")));





/* Chainloader for Hooks */


void flexiblas_chain_sgesvx_(void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info)
{
	void (*fn) (void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info);
	void (*fn_hook) (void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info);

	fn      = current_backend->lapack.sgesvx.f77_blas_function; 

    hook_pos_sgesvx ++;
    if( hook_pos_sgesvx < __flexiblas_hooks->sgesvx.nhook) {
        fn_hook = __flexiblas_hooks->sgesvx.f77_hook_function[hook_pos_sgesvx];
        fn_hook((void*) fact, (void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) af, (void*) ldaf, (void*) ipiv, (void*) equed, (void*) r, (void*) c, (void*) b, (void*) ldb, (void*) x, (void*) ldx, (void*) rcond, (void*) ferr, (void*) berr, (void*) work, (void*) iwork, (void*) info);
    } else {
        hook_pos_sgesvx = 0;
		fn((void*) fact, (void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) af, (void*) ldaf, (void*) ipiv, (void*) equed, (void*) r, (void*) c, (void*) b, (void*) ldb, (void*) x, (void*) ldx, (void*) rcond, (void*) ferr, (void*) berr, (void*) work, (void*) iwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_sgesvx(void* fact, void* trans, void* n, void* nrhs, void* a, void* lda, void* af, void* ldaf, void* ipiv, void* equed, void* r, void* c, void* b, void* ldb, void* x, void* ldx, void* rcond, void* ferr, void* berr, void* work, void* iwork, void* info)  __attribute__((alias("flexiblas_chain_sgesvx_")));



