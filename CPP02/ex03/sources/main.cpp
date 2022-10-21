/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:27:16 by lollith           #+#    #+#             */
/*   Updated: 2022/10/21 18:13:17 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.hpp>
#include "Point.hpp"
#include <iostream>

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

int main( void ) {
	Point a;
	Point b(10, 20);
	Point c(100, 30);

	Point p (20, 10);
	
	if (bsp(a, b, c, p))
		std::cout << "Point p a l'interieur du triangle" << std::endl;
	else
		std::cout << "Point p a l'exterieur du triangle" << std::endl;

	Point p0(150, 0);
	if (bsp(a, b, c, p0))
		std::cout << "Point p0 a l'interieur du triangle" << std::endl;
	else
		std::cout << "Point d a l'exterieur du triangle" << std::endl;
	

	Point	a1 = Point(0, 0); // constructeur de copy qui est invoque
	Point	b1 = Point(1, 1);
	Point	c1 = Point(-1, 1);

	Point	p1  = Point(0, 0);
	if (bsp(a1, b1, c1, p1))
		std::cout << "Point p1 a l'interieur du triangle" << std::endl;
	else
		std::cout << "Point p a l'exterieur du triangle" << std::endl;
	
	
	Point p2 = Point(-0.1, 0.5);
	if (bsp(a1, b1, c1, p2))
		std::cout << "Point p2 a l'interieur du triangle" << std::endl;
	else
		std::cout << "Point p a l'exterieur du triangle" << std::endl;
}