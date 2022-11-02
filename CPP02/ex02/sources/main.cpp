/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:27:16 by lollith           #+#    #+#             */
/*   Updated: 2022/10/21 09:58:05 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.hpp>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );//Fixed(2) creer une instance temporaire pas besoin de la nommer a vec int = 2; 5.05 est un double => on le cast en float
	
	std::cout << a << std::endl;
	std::cout <<"++a: "<< ++a << std::endl;// = 2^-8
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout <<"b :" << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << "mes tests" << std::endl;
	if (a > b)
		std::cout << "the upper is " << a << std::endl;
	else
		std::cout << "the upper is " << b << std::endl;

	if (a < b)
		std::cout << "the lower is " << a << std::endl;
	else
		std::cout << "the lower is " << b << std::endl;
	
	std::cout <<"--a: "<< --a << std::endl;// = 2^-8
	

	std::cout <<" a - b: "<< a - b<< std::endl;// = 2^-8

	return 0;
}
