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



static TLS_STORE uint8_t hook_pos_slasda = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slasda,SLASDA)(blasint* icompq, blasint* smlsiz, blasint* n, blasint* sqre, float* d, float* e, float* u, blasint* ldu, float* vt, blasint* k, float* difl, float* difr, float* z, float* poles, blasint* givptr, blasint* givcol, blasint* ldgcol, blasint* perm, float* givnum, float* c, float* s, float* work, blasint* iwork, blasint* info)
#else
void FC_GLOBAL(slasda,SLASDA)(blasint* icompq, blasint* smlsiz, blasint* n, blasint* sqre, float* d, float* e, float* u, blasint* ldu, float* vt, blasint* k, float* difl, float* difr, float* z, float* poles, blasint* givptr, blasint* givcol, blasint* ldgcol, blasint* perm, float* givnum, float* c, float* s, float* work, blasint* iwork, blasint* info)
#endif
{
	void (*fn) (void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info);
	void (*fn_hook) (void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.slasda.f77_blas_function; 
	fn_hook = __flexiblas_hooks->slasda.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) icompq, (void*) smlsiz, (void*) n, (void*) sqre, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) k, (void*) difl, (void*) difr, (void*) z, (void*) poles, (void*) givptr, (void*) givcol, (void*) ldgcol, (void*) perm, (void*) givnum, (void*) c, (void*) s, (void*) work, (void*) iwork, (void*) info); 
		return;
	} else {
		hook_pos_slasda = 0;
		fn_hook((void*) icompq, (void*) smlsiz, (void*) n, (void*) sqre, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) k, (void*) difl, (void*) difr, (void*) z, (void*) poles, (void*) givptr, (void*) givcol, (void*) ldgcol, (void*) perm, (void*) givnum, (void*) c, (void*) s, (void*) work, (void*) iwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slasda_(blasint* icompq, blasint* smlsiz, blasint* n, blasint* sqre, float* d, float* e, float* u, blasint* ldu, float* vt, blasint* k, float* difl, float* difr, float* z, float* poles, blasint* givptr, blasint* givcol, blasint* ldgcol, blasint* perm, float* givnum, float* c, float* s, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slasda,SLASDA)))));
#else
void slasda(blasint* icompq, blasint* smlsiz, blasint* n, blasint* sqre, float* d, float* e, float* u, blasint* ldu, float* vt, blasint* k, float* difl, float* difr, float* z, float* poles, blasint* givptr, blasint* givcol, blasint* ldgcol, blasint* perm, float* givnum, float* c, float* s, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slasda,SLASDA)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slasda_(void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info)
{
	void (*fn) (void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info);

	fn = current_backend->lapack.slasda.f77_blas_function; 

		fn((void*) icompq, (void*) smlsiz, (void*) n, (void*) sqre, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) k, (void*) difl, (void*) difr, (void*) z, (void*) poles, (void*) givptr, (void*) givcol, (void*) ldgcol, (void*) perm, (void*) givnum, (void*) c, (void*) s, (void*) work, (void*) iwork, (void*) info); 

	return;
}

void flexiblas_real_slasda(void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info)  __attribute__((alias("flexiblas_real_slasda_")));





/* Chainloader for Hooks */


void flexiblas_chain_slasda_(void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info)
{
	void (*fn) (void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info);
	void (*fn_hook) (void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info);

	fn      = current_backend->lapack.slasda.f77_blas_function; 

    hook_pos_slasda ++;
    if( hook_pos_slasda < __flexiblas_hooks->slasda.nhook) {
        fn_hook = __flexiblas_hooks->slasda.f77_hook_function[hook_pos_slasda];
        fn_hook((void*) icompq, (void*) smlsiz, (void*) n, (void*) sqre, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) k, (void*) difl, (void*) difr, (void*) z, (void*) poles, (void*) givptr, (void*) givcol, (void*) ldgcol, (void*) perm, (void*) givnum, (void*) c, (void*) s, (void*) work, (void*) iwork, (void*) info);
    } else {
        hook_pos_slasda = 0;
		fn((void*) icompq, (void*) smlsiz, (void*) n, (void*) sqre, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) k, (void*) difl, (void*) difr, (void*) z, (void*) poles, (void*) givptr, (void*) givcol, (void*) ldgcol, (void*) perm, (void*) givnum, (void*) c, (void*) s, (void*) work, (void*) iwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_slasda(void* icompq, void* smlsiz, void* n, void* sqre, void* d, void* e, void* u, void* ldu, void* vt, void* k, void* difl, void* difr, void* z, void* poles, void* givptr, void* givcol, void* ldgcol, void* perm, void* givnum, void* c, void* s, void* work, void* iwork, void* info)  __attribute__((alias("flexiblas_chain_slasda_")));



