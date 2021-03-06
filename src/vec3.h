/**************************************************************************
 *   vec3.h  --  This file is part of HFCXX.                              *
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

#ifndef _HFCXX_VEC3_H
#define _HFCXX_VEC3_H

#include <iostream>
#include <iomanip>
#include <vector>

class Vec3{
    private:
    double x,y,z;

    public:
    Vec3(); /* default constructor */
    Vec3(const double xx, const double yy, const double zz);
    Vec3(const Vec3 &rhs);

    const double getx() const;
    const double gety() const;
    const double getz() const;
};

/* typedefs */
typedef std::vector<double> VecDoub;
typedef std::vector<int> VecInt;

#endif // _HFCXX_VEC3_HH
