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



static TLS_STORE uint8_t hook_pos_dgelss = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dgelss,DGELSS)(blasint* m, blasint* n, blasint* nrhs, double* a, blasint* lda, double* b, blasint* ldb, double* s, double* rcond, blasint* rank_bn, double* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL(dgelss,DGELSS)(blasint* m, blasint* n, blasint* nrhs, double* a, blasint* lda, double* b, blasint* ldb, double* s, double* rcond, blasint* rank_bn, double* work, blasint* lwork, blasint* info)
#endif
{
	void (*fn) (void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info);
	void (*fn_hook) (void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dgelss.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dgelss.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) m, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) s, (void*) rcond, (void*) rank_bn, (void*) work, (void*) lwork, (void*) info); 
		return;
	} else {
		hook_pos_dgelss = 0;
		fn_hook((void*) m, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) s, (void*) rcond, (void*) rank_bn, (void*) work, (void*) lwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dgelss_(blasint* m, blasint* n, blasint* nrhs, double* a, blasint* lda, double* b, blasint* ldb, double* s, double* rcond, blasint* rank_bn, double* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dgelss,DGELSS)))));
#else
void dgelss(blasint* m, blasint* n, blasint* nrhs, double* a, blasint* lda, double* b, blasint* ldb, double* s, double* rcond, blasint* rank_bn, double* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dgelss,DGELSS)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dgelss_(void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info)
{
	void (*fn) (void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info);

	fn = current_backend->lapack.dgelss.f77_blas_function; 

		fn((void*) m, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) s, (void*) rcond, (void*) rank_bn, (void*) work, (void*) lwork, (void*) info); 

	return;
}

void flexiblas_real_dgelss(void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_real_dgelss_")));





/* Chainloader for Hooks */


void flexiblas_chain_dgelss_(void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info)
{
	void (*fn) (void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info);
	void (*fn_hook) (void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info);

	fn      = current_backend->lapack.dgelss.f77_blas_function; 

    hook_pos_dgelss ++;
    if( hook_pos_dgelss < __flexiblas_hooks->dgelss.nhook) {
        fn_hook = __flexiblas_hooks->dgelss.f77_hook_function[hook_pos_dgelss];
        fn_hook((void*) m, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) s, (void*) rcond, (void*) rank_bn, (void*) work, (void*) lwork, (void*) info);
    } else {
        hook_pos_dgelss = 0;
		fn((void*) m, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) s, (void*) rcond, (void*) rank_bn, (void*) work, (void*) lwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_dgelss(void* m, void* n, void* nrhs, void* a, void* lda, void* b, void* ldb, void* s, void* rcond, void* rank_bn, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_chain_dgelss_")));



