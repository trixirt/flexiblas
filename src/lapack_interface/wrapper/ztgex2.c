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
 /* Generated: Wed Mar 28 11:20:05 2018 */
        
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



static TLS_STORE uint8_t hook_pos_ztgex2 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ztgex2,ZTGEX2)(blasint* wantq, blasint* wantz, blasint* n, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* q, blasint* ldq, double complex* z, blasint* ldz, blasint* j1, blasint* info)
#else
void FC_GLOBAL(ztgex2,ZTGEX2)(blasint* wantq, blasint* wantz, blasint* n, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* q, blasint* ldq, double complex* z, blasint* ldz, blasint* j1, blasint* info)
#endif
{
	void (*fn) (void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info);
	void (*fn_hook) (void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.ztgex2.f77_blas_function; 
	fn_hook = __flexiblas_hooks->ztgex2.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) wantq, (void*) wantz, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) q, (void*) ldq, (void*) z, (void*) ldz, (void*) j1, (void*) info); 
		return;
	} else {
		hook_pos_ztgex2 = 0;
		fn_hook((void*) wantq, (void*) wantz, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) q, (void*) ldq, (void*) z, (void*) ldz, (void*) j1, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ztgex2_(blasint* wantq, blasint* wantz, blasint* n, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* q, blasint* ldq, double complex* z, blasint* ldz, blasint* j1, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztgex2,ZTGEX2)))));
#else
void ztgex2(blasint* wantq, blasint* wantz, blasint* n, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* q, blasint* ldq, double complex* z, blasint* ldz, blasint* j1, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztgex2,ZTGEX2)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ztgex2_(void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info)
{
	void (*fn) (void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info);

	fn = current_backend->lapack.ztgex2.f77_blas_function; 

		fn((void*) wantq, (void*) wantz, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) q, (void*) ldq, (void*) z, (void*) ldz, (void*) j1, (void*) info); 

	return;
}

void flexiblas_real_ztgex2(void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info)  __attribute__((alias("flexiblas_real_ztgex2_")));





/* Chainloader for Hooks */


void flexiblas_chain_ztgex2_(void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info)
{
	void (*fn) (void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info);
	void (*fn_hook) (void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info);

	fn      = current_backend->lapack.ztgex2.f77_blas_function; 

    hook_pos_ztgex2 ++;
    if( hook_pos_ztgex2 < __flexiblas_hooks->ztgex2.nhook) {
        fn_hook = __flexiblas_hooks->ztgex2.f77_hook_function[hook_pos_ztgex2];
        fn_hook((void*) wantq, (void*) wantz, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) q, (void*) ldq, (void*) z, (void*) ldz, (void*) j1, (void*) info);
    } else {
        hook_pos_ztgex2 = 0;
		fn((void*) wantq, (void*) wantz, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) q, (void*) ldq, (void*) z, (void*) ldz, (void*) j1, (void*) info); 
	}
	return;
}

void flexiblas_chain_ztgex2(void* wantq, void* wantz, void* n, void* a, void* lda, void* b, void* ldb, void* q, void* ldq, void* z, void* ldz, void* j1, void* info)  __attribute__((alias("flexiblas_chain_ztgex2_")));



