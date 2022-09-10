/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:56:45 by lollith           #+#    #+#             */
/*   Updated: 2022/09/10 21:22:34 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main ()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string stringREF;

	stringPTR = &string;
	stringREF = string;

	std::cout << "adresse string: " << &string << std::endl;
	std::cout << "adresse stringPTR: " << stringPTR << std::endl;
	std::cout << "adresse stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "valeur string: " << string << std::endl;
	std::cout << "valeur pointee par stringPTR: " << *stringPTR << std::endl;
	std::cout << "valeur pointee par stringREF: " << stringREF << std::endl;
}