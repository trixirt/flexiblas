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



static TLS_STORE uint8_t hook_pos_slarre = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slarre,SLARRE)(char* range, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wgap, blasint* iblock, blasint* indexw, float* gers, float* pivmin, float* work, blasint* iwork, blasint* info)
#else
void FC_GLOBAL(slarre,SLARRE)(char* range, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wgap, blasint* iblock, blasint* indexw, float* gers, float* pivmin, float* work, blasint* iwork, blasint* info)
#endif
{
	void (*fn) (void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info);
	void (*fn_hook) (void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.slarre.f77_blas_function; 
	fn_hook = __flexiblas_hooks->slarre.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) range, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) d, (void*) e, (void*) e2, (void*) rtol1, (void*) rtol2, (void*) spltol, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wgap, (void*) iblock, (void*) indexw, (void*) gers, (void*) pivmin, (void*) work, (void*) iwork, (void*) info); 
		return;
	} else {
		hook_pos_slarre = 0;
		fn_hook((void*) range, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) d, (void*) e, (void*) e2, (void*) rtol1, (void*) rtol2, (void*) spltol, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wgap, (void*) iblock, (void*) indexw, (void*) gers, (void*) pivmin, (void*) work, (void*) iwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slarre_(char* range, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wgap, blasint* iblock, blasint* indexw, float* gers, float* pivmin, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slarre,SLARRE)))));
#else
void slarre(char* range, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wgap, blasint* iblock, blasint* indexw, float* gers, float* pivmin, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slarre,SLARRE)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slarre_(void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info)
{
	void (*fn) (void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info);

	fn = current_backend->lapack.slarre.f77_blas_function; 

		fn((void*) range, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) d, (void*) e, (void*) e2, (void*) rtol1, (void*) rtol2, (void*) spltol, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wgap, (void*) iblock, (void*) indexw, (void*) gers, (void*) pivmin, (void*) work, (void*) iwork, (void*) info); 

	return;
}

void flexiblas_real_slarre(void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info)  __attribute__((alias("flexiblas_real_slarre_")));





/* Chainloader for Hooks */


void flexiblas_chain_slarre_(void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info)
{
	void (*fn) (void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info);
	void (*fn_hook) (void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info);

	fn      = current_backend->lapack.slarre.f77_blas_function; 

    hook_pos_slarre ++;
    if( hook_pos_slarre < __flexiblas_hooks->slarre.nhook) {
        fn_hook = __flexiblas_hooks->slarre.f77_hook_function[hook_pos_slarre];
        fn_hook((void*) range, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) d, (void*) e, (void*) e2, (void*) rtol1, (void*) rtol2, (void*) spltol, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wgap, (void*) iblock, (void*) indexw, (void*) gers, (void*) pivmin, (void*) work, (void*) iwork, (void*) info);
    } else {
        hook_pos_slarre = 0;
		fn((void*) range, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) d, (void*) e, (void*) e2, (void*) rtol1, (void*) rtol2, (void*) spltol, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wgap, (void*) iblock, (void*) indexw, (void*) gers, (void*) pivmin, (void*) work, (void*) iwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_slarre(void* range, void* n, void* vl, void* vu, void* il, void* iu, void* d, void* e, void* e2, void* rtol1, void* rtol2, void* spltol, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wgap, void* iblock, void* indexw, void* gers, void* pivmin, void* work, void* iwork, void* info)  __attribute__((alias("flexiblas_chain_slarre_")));



