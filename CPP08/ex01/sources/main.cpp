/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:57:00 by agouet            #+#    #+#             */
/*   Updated: 2022/10/19 14:12:39 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

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
	Span sp = Span(5);
	 sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	 std::cout << sp << std::endl;
	 std::cout << "distance la plus grande: " << sp.longestSpan() << std::endl;
	 std::cout << sp.shortestSpan() << std::endl;
}
catch (std::string const &error){
	std::cerr << error << std::endl;
}
	return 0;
}