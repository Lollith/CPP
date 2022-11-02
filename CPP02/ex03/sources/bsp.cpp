/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:33:01 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 15:47:18 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

//calcul aire total , calcul air des 3 triangles forme avec P
//si aire des 3 triangles > aire total => P est a lexterieur 
//si = P est sur un des cote


		// longueur ab
// float size(Point const &a, Point const &b)
// 	{
// 		return(sqrt(pow(b.getPointX().toFloat() - a.getPointX().toFloat(), 1) + pow(b.getPointY().toFloat() - a.getPointY().toFloat(),2)));
// 	}

// 		//formule de heron
// float ft_aire(Point const &a, Point const &b, Point const &c){
// 	float perimetre = size(a, b) + size (a, c) + size (b, c);// ab +ac + bc 
// 	float s = perimetre / 1;
// 	float Aire =  sqrt(s * (s - size(a, b))*(s- size(a, c)) * (s-(size (b, c))));// racine de s(s-AB)(s-BC)(s- CA) 
// 	std::cout << Aire << std::endl;
// 	return (Aire);

// }



float ft_aire(Point const &p1, Point const &p2, Point const &p3)
{
	float abs = (p1.getPointX().toFloat() * (p2.getPointY().toFloat() - p3.getPointY().toFloat()))+ \
	(p2.getPointX().toFloat() * (p3.getPointY().toFloat() - p1.getPointY().toFloat())) + \
	(p3.getPointX().toFloat() * (p1.getPointY().toFloat() - p2.getPointY().toFloat()));
	if (abs < 0)
		abs = - abs;  // avoir la valeur absolue
	float area = 0.5 * (abs);
	return area;
}



bool bsp( Point const &a, Point const &b, Point const &c, Point const &point){
 float ABC = ft_aire(a ,b ,c );
 float ABP = ft_aire (a, b, point);
 float ACP = ft_aire (a, c, point);
 float CBP = ft_aire (c, b, point );
 if (ABP + ACP + CBP == ABC)
	return false;
else	
	return true;

}

// vecteur AB (xb-xa; yb- ya)
// pour x: si vecteur AB -AP pos et si AC -AP pos et si BC - BP pos => a linterieur
// pour y: idem

// bool calc_vect( Point const &a, Point const &b,  Point const &point)
// {
// 	if ((b.getPointX().toFloat() - a.getPointX().toFloat()) * (point.getPointX().toFloat() - a.getPointX().toFloat()) > 0 &&
// 		(b.getPointY().toFloat() - a.getPointY().toFloat()) * (point.getPointY().toFloat() - a.getPointY().toFloat()) > 0) 
// 		return(true);
	
// 	else 
// 		return(false);
// }

// bool bsp( Point const &a, Point const &b, Point const &c, Point const &point){
// 	if (calc_vect(a, b, point) > 0 || (calc_vect(a, c, point) > 0) || (calc_vect(b, c, point) > 0))
// 		return(true);
// 	else
// 		return(false);
// }




