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



static TLS_STORE uint8_t hook_pos_dlaed8 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlaed8,DLAED8)(blasint* icompq, blasint* k, blasint* n, blasint* qsiz, double* d, double* q, blasint* ldq, blasint* indxq, double* rho, blasint* cutpnt, double* z, double* dlamda, double* q2, blasint* ldq2, double* w, blasint* perm, blasint* givptr, blasint* givcol, double* givnum, blasint* indxp, blasint* indx, blasint* info)
#else
void FC_GLOBAL(dlaed8,DLAED8)(blasint* icompq, blasint* k, blasint* n, blasint* qsiz, double* d, double* q, blasint* ldq, blasint* indxq, double* rho, blasint* cutpnt, double* z, double* dlamda, double* q2, blasint* ldq2, double* w, blasint* perm, blasint* givptr, blasint* givcol, double* givnum, blasint* indxp, blasint* indx, blasint* info)
#endif
{
	void (*fn) (void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info);
	void (*fn_hook) (void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dlaed8.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dlaed8.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) icompq, (void*) k, (void*) n, (void*) qsiz, (void*) d, (void*) q, (void*) ldq, (void*) indxq, (void*) rho, (void*) cutpnt, (void*) z, (void*) dlamda, (void*) q2, (void*) ldq2, (void*) w, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) indxp, (void*) indx, (void*) info); 
		return;
	} else {
		hook_pos_dlaed8 = 0;
		fn_hook((void*) icompq, (void*) k, (void*) n, (void*) qsiz, (void*) d, (void*) q, (void*) ldq, (void*) indxq, (void*) rho, (void*) cutpnt, (void*) z, (void*) dlamda, (void*) q2, (void*) ldq2, (void*) w, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) indxp, (void*) indx, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlaed8_(blasint* icompq, blasint* k, blasint* n, blasint* qsiz, double* d, double* q, blasint* ldq, blasint* indxq, double* rho, blasint* cutpnt, double* z, double* dlamda, double* q2, blasint* ldq2, double* w, blasint* perm, blasint* givptr, blasint* givcol, double* givnum, blasint* indxp, blasint* indx, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaed8,DLAED8)))));
#else
void dlaed8(blasint* icompq, blasint* k, blasint* n, blasint* qsiz, double* d, double* q, blasint* ldq, blasint* indxq, double* rho, blasint* cutpnt, double* z, double* dlamda, double* q2, blasint* ldq2, double* w, blasint* perm, blasint* givptr, blasint* givcol, double* givnum, blasint* indxp, blasint* indx, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaed8,DLAED8)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlaed8_(void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info)
{
	void (*fn) (void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info);

	fn = current_backend->lapack.dlaed8.f77_blas_function; 

		fn((void*) icompq, (void*) k, (void*) n, (void*) qsiz, (void*) d, (void*) q, (void*) ldq, (void*) indxq, (void*) rho, (void*) cutpnt, (void*) z, (void*) dlamda, (void*) q2, (void*) ldq2, (void*) w, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) indxp, (void*) indx, (void*) info); 

	return;
}

void flexiblas_real_dlaed8(void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info)  __attribute__((alias("flexiblas_real_dlaed8_")));





/* Chainloader for Hooks */


void flexiblas_chain_dlaed8_(void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info)
{
	void (*fn) (void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info);
	void (*fn_hook) (void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info);

	fn      = current_backend->lapack.dlaed8.f77_blas_function; 

    hook_pos_dlaed8 ++;
    if( hook_pos_dlaed8 < __flexiblas_hooks->dlaed8.nhook) {
        fn_hook = __flexiblas_hooks->dlaed8.f77_hook_function[hook_pos_dlaed8];
        fn_hook((void*) icompq, (void*) k, (void*) n, (void*) qsiz, (void*) d, (void*) q, (void*) ldq, (void*) indxq, (void*) rho, (void*) cutpnt, (void*) z, (void*) dlamda, (void*) q2, (void*) ldq2, (void*) w, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) indxp, (void*) indx, (void*) info);
    } else {
        hook_pos_dlaed8 = 0;
		fn((void*) icompq, (void*) k, (void*) n, (void*) qsiz, (void*) d, (void*) q, (void*) ldq, (void*) indxq, (void*) rho, (void*) cutpnt, (void*) z, (void*) dlamda, (void*) q2, (void*) ldq2, (void*) w, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) indxp, (void*) indx, (void*) info); 
	}
	return;
}

void flexiblas_chain_dlaed8(void* icompq, void* k, void* n, void* qsiz, void* d, void* q, void* ldq, void* indxq, void* rho, void* cutpnt, void* z, void* dlamda, void* q2, void* ldq2, void* w, void* perm, void* givptr, void* givcol, void* givnum, void* indxp, void* indx, void* info)  __attribute__((alias("flexiblas_chain_dlaed8_")));



