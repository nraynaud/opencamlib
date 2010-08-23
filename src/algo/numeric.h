/*  $Id$
 * 
 *  Copyright 2010 Anders Wallin (anders.e.e.wallin "at" gmail.com)
 *  
 *  This file is part of OpenCAMlib.
 *
 *  OpenCAMlib is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenCAMlib is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenCAMlib.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef NUMERIC_H
#define NUMERIC_H

namespace ocl
{
    
#define PI 3.1415926535897932

///
/// \brief Numeric is a collection of functions for dealing
/// with the joys of floating-point arithmetic.
///

/// return 1 of x>0, return -1 if x<0.
double sign(double x);

/// return x*x
inline double square(double x) { return x*x; };

/// return true if x is negative
bool isNegative(double x);

/// return true if x is negative
bool isPositive(double x);

/// return true if x is zero, to within tolerance 
bool isZero_tol(double x);

/// returns machine-epsilon
/// eps is such that 1 < 1 + eps
/// but 1 == 1 + eps/2 
double eps();

/// solves 2x2 matrix system Ax=y
bool two_by_two_solver( const double& a, 
                        const double& b, 
                        const double& c,
                        const double& d,
                        const double& e,
                        const double& f,
                        double& u,
                        double& v);

/// returns intersection in XY plane btw. lines p1,p2 and p3,p4
bool xy_line_line_intersection( const Point& p1, const Point& p2, double& v,
                                const Point& p3, const Point& p4, double& t);

} // end namespace
#endif
// end file numeric.h
