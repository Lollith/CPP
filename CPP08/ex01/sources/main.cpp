/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:57:00 by agouet            #+#    #+#             */
/*   Updated: 2022/10/19 18:22:21 by agouet           ###   ########.fr       */
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
	sp.addNumber(11);
	 std::cout << sp << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

try{
	Span sp = Span(1);
	 sp.addNumber(5);
	std::cout << sp << std::endl;
	std::cout << "distance la plus grande: " << sp.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " <<  sp.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

try{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	std::cout << "distance la plus grande: " << sp.longestSpan() << std::endl;
	std::cout << "distance la plus courte: " <<  sp.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

try{
	Span sp = Span (10000);
	 sp.addNumber(5);
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}

Span sp1 = Span(10);
sp1.my_fill_n(10);

	return 0;
}