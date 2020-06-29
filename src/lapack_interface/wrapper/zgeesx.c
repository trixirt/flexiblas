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



static TLS_STORE uint8_t hook_pos_zgeesx = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zgeesx,ZGEESX)(char* jobvs, char* sort, blasint* selectfunc, char* sense, blasint* n, double complex* a, blasint* lda, blasint* sdim, double complex* w, double complex* vs, blasint* ldvs, double* rconde, double* rcondv, double complex* work, blasint* lwork, double* rwork, blasint* bwork, blasint* info)
#else
void FC_GLOBAL(zgeesx,ZGEESX)(char* jobvs, char* sort, blasint* selectfunc, char* sense, blasint* n, double complex* a, blasint* lda, blasint* sdim, double complex* w, double complex* vs, blasint* ldvs, double* rconde, double* rcondv, double complex* work, blasint* lwork, double* rwork, blasint* bwork, blasint* info)
#endif
{
	void (*fn) (void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info);
	void (*fn_hook) (void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.zgeesx.f77_blas_function; 
	fn_hook = __flexiblas_hooks->zgeesx.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) sense, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) w, (void*) vs, (void*) ldvs, (void*) rconde, (void*) rcondv, (void*) work, (void*) lwork, (void*) rwork, (void*) bwork, (void*) info); 
		return;
	} else {
		hook_pos_zgeesx = 0;
		fn_hook((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) sense, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) w, (void*) vs, (void*) ldvs, (void*) rconde, (void*) rcondv, (void*) work, (void*) lwork, (void*) rwork, (void*) bwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zgeesx_(char* jobvs, char* sort, blasint* selectfunc, char* sense, blasint* n, double complex* a, blasint* lda, blasint* sdim, double complex* w, double complex* vs, blasint* ldvs, double* rconde, double* rcondv, double complex* work, blasint* lwork, double* rwork, blasint* bwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zgeesx,ZGEESX)))));
#else
void zgeesx(char* jobvs, char* sort, blasint* selectfunc, char* sense, blasint* n, double complex* a, blasint* lda, blasint* sdim, double complex* w, double complex* vs, blasint* ldvs, double* rconde, double* rcondv, double complex* work, blasint* lwork, double* rwork, blasint* bwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zgeesx,ZGEESX)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zgeesx_(void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info)
{
	void (*fn) (void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info);

	fn = current_backend->lapack.zgeesx.f77_blas_function; 

		fn((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) sense, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) w, (void*) vs, (void*) ldvs, (void*) rconde, (void*) rcondv, (void*) work, (void*) lwork, (void*) rwork, (void*) bwork, (void*) info); 

	return;
}

void flexiblas_real_zgeesx(void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info)  __attribute__((alias("flexiblas_real_zgeesx_")));





/* Chainloader for Hooks */


void flexiblas_chain_zgeesx_(void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info)
{
	void (*fn) (void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info);
	void (*fn_hook) (void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info);

	fn      = current_backend->lapack.zgeesx.f77_blas_function; 

    hook_pos_zgeesx ++;
    if( hook_pos_zgeesx < __flexiblas_hooks->zgeesx.nhook) {
        fn_hook = __flexiblas_hooks->zgeesx.f77_hook_function[hook_pos_zgeesx];
        fn_hook((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) sense, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) w, (void*) vs, (void*) ldvs, (void*) rconde, (void*) rcondv, (void*) work, (void*) lwork, (void*) rwork, (void*) bwork, (void*) info);
    } else {
        hook_pos_zgeesx = 0;
		fn((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) sense, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) w, (void*) vs, (void*) ldvs, (void*) rconde, (void*) rcondv, (void*) work, (void*) lwork, (void*) rwork, (void*) bwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_zgeesx(void* jobvs, void* sort, void* selectfunc, void* sense, void* n, void* a, void* lda, void* sdim, void* w, void* vs, void* ldvs, void* rconde, void* rcondv, void* work, void* lwork, void* rwork, void* bwork, void* info)  __attribute__((alias("flexiblas_chain_zgeesx_")));



