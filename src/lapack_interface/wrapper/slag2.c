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



static TLS_STORE uint8_t hook_pos_slag2 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slag2,SLAG2)(float* a, blasint* lda, float* b, blasint* ldb, float* safmin, float* scale1, float* scale2, float* wr1, float* wr2, float* wi)
#else
void FC_GLOBAL(slag2,SLAG2)(float* a, blasint* lda, float* b, blasint* ldb, float* safmin, float* scale1, float* scale2, float* wr1, float* wr2, float* wi)
#endif
{
	void (*fn) (void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi);
	void (*fn_hook) (void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.slag2.f77_blas_function; 
	fn_hook = __flexiblas_hooks->slag2.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) safmin, (void*) scale1, (void*) scale2, (void*) wr1, (void*) wr2, (void*) wi); 
		return;
	} else {
		hook_pos_slag2 = 0;
		fn_hook((void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) safmin, (void*) scale1, (void*) scale2, (void*) wr1, (void*) wr2, (void*) wi);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slag2_(float* a, blasint* lda, float* b, blasint* ldb, float* safmin, float* scale1, float* scale2, float* wr1, float* wr2, float* wi) __attribute__((alias(MTS(FC_GLOBAL(slag2,SLAG2)))));
#else
void slag2(float* a, blasint* lda, float* b, blasint* ldb, float* safmin, float* scale1, float* scale2, float* wr1, float* wr2, float* wi) __attribute__((alias(MTS(FC_GLOBAL(slag2,SLAG2)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slag2_(void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi)
{
	void (*fn) (void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi);

	fn = current_backend->lapack.slag2.f77_blas_function; 

		fn((void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) safmin, (void*) scale1, (void*) scale2, (void*) wr1, (void*) wr2, (void*) wi); 

	return;
}

void flexiblas_real_slag2(void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi)  __attribute__((alias("flexiblas_real_slag2_")));





/* Chainloader for Hooks */


void flexiblas_chain_slag2_(void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi)
{
	void (*fn) (void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi);
	void (*fn_hook) (void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi);

	fn      = current_backend->lapack.slag2.f77_blas_function; 

    hook_pos_slag2 ++;
    if( hook_pos_slag2 < __flexiblas_hooks->slag2.nhook) {
        fn_hook = __flexiblas_hooks->slag2.f77_hook_function[hook_pos_slag2];
        fn_hook((void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) safmin, (void*) scale1, (void*) scale2, (void*) wr1, (void*) wr2, (void*) wi);
    } else {
        hook_pos_slag2 = 0;
		fn((void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) safmin, (void*) scale1, (void*) scale2, (void*) wr1, (void*) wr2, (void*) wi); 
	}
	return;
}

void flexiblas_chain_slag2(void* a, void* lda, void* b, void* ldb, void* safmin, void* scale1, void* scale2, void* wr1, void* wr2, void* wi)  __attribute__((alias("flexiblas_chain_slag2_")));



