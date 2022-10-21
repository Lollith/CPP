/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:33:01 by agouet            #+#    #+#             */
/*   Updated: 2022/10/21 18:05:14 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// vecteur AB (xb-xa; yb- ya)
// pour x: si vecteur AB -AP pos et si AC -AP pos et si BC - BP pos => a linterieur
// pour y: idem

bool calc_vect( Point const &a, Point const &b,  Point const &point)
{
	if ((b.getPointX().toFloat() - a.getPointX().toFloat()) * (point.getPointX().toFloat() - a.getPointX().toFloat()) > 0 &&
		(b.getPointY().toFloat() - a.getPointY().toFloat()) * (point.getPointY().toFloat() - a.getPointY().toFloat()) > 0) 
		return(true);
	
	else 
		return(false);
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point){
	if (calc_vect(a, b, point) > 0 || (calc_vect(a, c, point) > 0) || (calc_vect(b, c, point) > 0))
		return(true);
	else
		return(false);
}
