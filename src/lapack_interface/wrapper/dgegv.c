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



static TLS_STORE uint8_t hook_pos_dgegv = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dgegv,DGEGV)(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL(dgegv,DGEGV)(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info)
#endif
{
	void (*fn) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info);
	void (*fn_hook) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dgegv.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dgegv.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info); 
		return;
	} else {
		hook_pos_dgegv = 0;
		fn_hook((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dgegv_(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dgegv,DGEGV)))));
#else
void dgegv(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dgegv,DGEGV)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dgegv_(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info)
{
	void (*fn) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info);

	fn = current_backend->lapack.dgegv.f77_blas_function; 

		fn((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info); 

	return;
}

void flexiblas_real_dgegv(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_real_dgegv_")));





/* Chainloader for Hooks */


void flexiblas_chain_dgegv_(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info)
{
	void (*fn) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info);
	void (*fn_hook) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info);

	fn      = current_backend->lapack.dgegv.f77_blas_function; 

    hook_pos_dgegv ++;
    if( hook_pos_dgegv < __flexiblas_hooks->dgegv.nhook) {
        fn_hook = __flexiblas_hooks->dgegv.f77_hook_function[hook_pos_dgegv];
        fn_hook((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info);
    } else {
        hook_pos_dgegv = 0;
		fn((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_dgegv(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_chain_dgegv_")));



