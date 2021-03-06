/**************************************************************************
 *   kinetic.cpp  --  This file is part of HFCXX.                         *
 *                                                                        *
 *   Copyright (C) 2012, Ivo Filot                                        *
 *                                                                        *
 *   HFCXX is free software:                                              *
 *   you can redistribute it and/or modify it under the terms of the      *
 *   GNU General Public License as published by the Free Software         *
 *   Foundation, either version 3 of the License, or (at your option)     *
 *   any later version.                                                   *
 *                                                                        *
 *   HFCXX is distributed in the hope that it will be useful,             *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty          *
 *   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.              *
 *   See the GNU General Public License for more details.                 *
 *                                                                        *
 *   You should have received a copy of the GNU General Public License    *
 *   along with this program.  If not, see http://www.gnu.org/licenses/.  *
 *                                                                        *
 **************************************************************************/

#include "kinetic.h"

double gto_kinetic(GTO &gto1, GTO &gto2) {
    double term0 = gto2.alpha * (2 * ( gto2.l + gto2.m + gto2.n ) + 3 ) *
        gto_overlap(gto1, gto2);

    double term1 = -2 * pow(gto2.alpha,2.0) * (
        overlap(gto1.alpha, gto1.l, gto1.m, gto1.n, gto1.r, gto2.alpha, gto2.l+2, gto2.m, gto2.n, gto2.r) +
        overlap(gto1.alpha, gto1.l, gto1.m, gto1.n, gto1.r, gto2.alpha, gto2.l, gto2.m+2, gto2.n, gto2.r) +
        overlap(gto1.alpha, gto1.l, gto1.m, gto1.n, gto1.r, gto2.alpha, gto2.l, gto2.m, gto2.n+2, gto2.r)
    );
    double term2 = -0.5 * (gto2.l * (gto2.l - 1) *
        overlap(gto1.alpha, gto1.l, gto1.m, gto1.n, gto1.r, gto2.alpha, gto2.l-2, gto2.m, gto2.n, gto2.r) +
                                                 gto2.m * (gto2.m - 1) *
        overlap(gto1.alpha, gto1.l, gto1.m, gto1.n, gto1.r, gto2.alpha, gto2.l, gto2.m-2, gto2.n, gto2.r) +
                                                 gto2.n * (gto2.n - 1) *
        overlap(gto1.alpha, gto1.l, gto1.m, gto1.n, gto1.r, gto2.alpha, gto2.l, gto2.m, gto2.n-2, gto2.r) );

    return term0 + term1 + term2;
}

double cgf_kinetic(CGF &cgf1, CGF &cgf2) {
    unsigned int i = cgf1.gtos.size();
    unsigned int j = cgf2.gtos.size();

    double sum = 0;
    double norm1, norm2;

    for(unsigned int k = 0; k < i; k++) {
        for(unsigned int l = 0; l < j; l++) {
            norm1 = cgf1.gtos[k].norm;
            norm2 = cgf2.gtos[l].norm;
            sum += cgf1.gtos[k].c * cgf2.gtos[l].c * norm1 * norm2 * gto_kinetic(cgf1.gtos[k], cgf2.gtos[l]);
        }
    }

    return sum;
}
