/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:57:00 by agouet            #+#    #+#             */
/*   Updated: 2022/10/20 10:54:25 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

int main()
{
try{
	Span sp = Span(5);
	 sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(11); // 1 en trop => va retourner une erreur
	 std::cout << sp << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

std::cout << std::endl;

try{
	Span sp = Span(1);
	 sp.addNumber(5); // une seule valeur => ne va pas pouvopir comparer
	std::cout << sp << std::endl;
	std::cout << "distance la plus grande: " << sp.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " <<  sp.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

std::cout << std::endl;

try{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	std::cout << "distance la plus grande: " << sp.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " << sp.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

std::cout << std::endl;


try{
	Span sp1 = Span(10000); //rempli jusqua max
	sp1.my_fill_n(0, 6, 1);
	sp1.my_fill_n(9, 70, 6);
	sp1.my_fill_n(2000,10100, 23); // deborde
	std::cout << sp1 << std::endl;
	std::cout << "distance la plus grande: " << sp1.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " << sp1.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

std::cout << std::endl;


try{
	Span sp1 = Span(10000); //rempli jusqua max
	sp1.my_fill_n(0, 6, 1);
	sp1.my_fill_n(9, 70, 6);
	sp1.my_fill_n(20000,10000, 23); // deborde
	std::cout << "distance la plus grande: " << sp1.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " << sp1.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

std::cout << std::endl;


try{
	Span sp1 = Span(10000); //rempli jusqua max
	sp1.my_fill_n(0, 6, 1);
	sp1.my_fill_n(9, 70, 6);
	sp1.my_fill_n(3000,10000, 23); // deborde
	std::cout << sp1 << std::endl;
	std::cout << "distance la plus grande: " << sp1.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " << sp1.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}
	
	return 0;
}