/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
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
 * Linking FlexiBLAS statically or dynamically with other modules is making a combined
 * work based on FlexiBLAS. Thus, the terms and conditions of the GNU General
 * Public License cover the whole combination.
 *
 * As a special exception, the copyright holders of FlexiBLAS give you permission
 * to combine FlexiBLAS program with free software programs or libraries that are
 * released under the GNU LGPL and with independent modules that communicate with
 * FlexiBLAS solely through the BLAS/LAPACK interface as provided by the
 * BLAS/LAPACK reference implementation. You may copy and distribute such a system
 * following the terms of the GNU GPL for FlexiBLAS and the licenses of the other
 * code concerned, provided that you include the source code of that other code
 * when and as the GNU GPL requires distribution of source code and provided that
 * you do not modify the BLAS/LAPACK interface.
 *
 * Note that people who make modified versions of FlexiBLAS are not obligated to
 * grant this special exception for their modified versions; it is their choice
 * whether to do so. The GNU General Public License gives permission to release a
 * modified version without this exception; this exception also makes it possible
 * to release a modified version which carries forward this exception. If you
 * modify the BLAS/LAPACK interface, this exception does not apply to your
 * modified version of FlexiBLAS, and you must remove this exception when you
 * distribute your modified version.
 *
 * This exception is an additional permission under section 7 of the GNU General
 * Public License, version 3 (“GPLv3”)
 *
 *
 * Copyright (C) Martin Koehler, 2015-2017
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Fri Jul 10 16:25:23 2020 */
        
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



static TLS_STORE uint8_t hook_pos_sgejsv = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(sgejsv,SGEJSV)(char* joba, char* jobu, char* jobv, char* jobr, char* jobt, char* jobp, blasint* m, blasint* n, float* a, blasint* lda, float* sva, float* u, blasint* ldu, float* v, blasint* ldv, float* work, blasint* lwork, blasint* iwork, blasint* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp)
#else
void FC_GLOBAL(sgejsv,SGEJSV)(char* joba, char* jobu, char* jobv, char* jobr, char* jobt, char* jobp, blasint* m, blasint* n, float* a, blasint* lda, float* sva, float* u, blasint* ldu, float* v, blasint* ldv, float* work, blasint* lwork, blasint* iwork, blasint* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp)
#endif
{
	void (*fn) (void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp);
	void (*fn_hook) (void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.sgejsv.f77_blas_function; 
	fn_hook = __flexiblas_hooks->sgejsv.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) joba, (void*) jobu, (void*) jobv, (void*) jobr, (void*) jobt, (void*) jobp, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) sva, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) work, (void*) lwork, (void*) iwork, (void*) info, (blasint) len_joba, (blasint) len_jobu, (blasint) len_jobv, (blasint) len_jobr, (blasint) len_jobt, (blasint) len_jobp); 
		return;
	} else {
		hook_pos_sgejsv = 0;
		fn_hook((void*) joba, (void*) jobu, (void*) jobv, (void*) jobr, (void*) jobt, (void*) jobp, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) sva, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) work, (void*) lwork, (void*) iwork, (void*) info, (blasint) len_joba, (blasint) len_jobu, (blasint) len_jobv, (blasint) len_jobr, (blasint) len_jobt, (blasint) len_jobp);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void sgejsv_(char* joba, char* jobu, char* jobv, char* jobr, char* jobt, char* jobp, blasint* m, blasint* n, float* a, blasint* lda, float* sva, float* u, blasint* ldu, float* v, blasint* ldv, float* work, blasint* lwork, blasint* iwork, blasint* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp) __attribute__((alias(MTS(FC_GLOBAL(sgejsv,SGEJSV)))));
#else
void sgejsv(char* joba, char* jobu, char* jobv, char* jobr, char* jobt, char* jobp, blasint* m, blasint* n, float* a, blasint* lda, float* sva, float* u, blasint* ldu, float* v, blasint* ldv, float* work, blasint* lwork, blasint* iwork, blasint* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp) __attribute__((alias(MTS(FC_GLOBAL(sgejsv,SGEJSV)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_sgejsv_(void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp)
{
	void (*fn) (void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp);

	fn = current_backend->lapack.sgejsv.f77_blas_function; 

		fn((void*) joba, (void*) jobu, (void*) jobv, (void*) jobr, (void*) jobt, (void*) jobp, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) sva, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) work, (void*) lwork, (void*) iwork, (void*) info, (blasint) len_joba, (blasint) len_jobu, (blasint) len_jobv, (blasint) len_jobr, (blasint) len_jobt, (blasint) len_jobp); 

	return;
}

void flexiblas_real_sgejsv(void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp)  __attribute__((alias("flexiblas_real_sgejsv_")));





/* Chainloader for Hooks */


void flexiblas_chain_sgejsv_(void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp)
{
	void (*fn) (void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp);
	void (*fn_hook) (void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp);

	fn      = current_backend->lapack.sgejsv.f77_blas_function; 

    hook_pos_sgejsv ++;
    if( hook_pos_sgejsv < __flexiblas_hooks->sgejsv.nhook) {
        fn_hook = __flexiblas_hooks->sgejsv.f77_hook_function[hook_pos_sgejsv];
        fn_hook((void*) joba, (void*) jobu, (void*) jobv, (void*) jobr, (void*) jobt, (void*) jobp, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) sva, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) work, (void*) lwork, (void*) iwork, (void*) info, (blasint) len_joba, (blasint) len_jobu, (blasint) len_jobv, (blasint) len_jobr, (blasint) len_jobt, (blasint) len_jobp);
    } else {
        hook_pos_sgejsv = 0;
		fn((void*) joba, (void*) jobu, (void*) jobv, (void*) jobr, (void*) jobt, (void*) jobp, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) sva, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) work, (void*) lwork, (void*) iwork, (void*) info, (blasint) len_joba, (blasint) len_jobu, (blasint) len_jobv, (blasint) len_jobr, (blasint) len_jobt, (blasint) len_jobp); 
	}
	return;
}

void flexiblas_chain_sgejsv(void* joba, void* jobu, void* jobv, void* jobr, void* jobt, void* jobp, void* m, void* n, void* a, void* lda, void* sva, void* u, void* ldu, void* v, void* ldv, void* work, void* lwork, void* iwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv, blasint len_jobr, blasint len_jobt, blasint len_jobp)  __attribute__((alias("flexiblas_chain_sgejsv_")));




