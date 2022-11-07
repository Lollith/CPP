/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:57:56 by agouet            #+#    #+#             */
/*   Updated: 2022/11/07 10:00:13 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iomanip>

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "1 parameter!" << std::endl; 
		return (1);
	}

	// check mon parametre de main , si scalaire
	try{
		Convert mytest(av[1]);
	}
	catch( std::string &che){
		std::cout << "Error: " << che << std::endl;
		return (1);
	}

	Convert scal(av[1]);
	scal.define_precision();
	try{
		char c = scal;
		std::cout << "char: " << c << std::endl;
	}
	catch (std::string &e){
		std::cout << "char: " << e << std::endl;
	}

	try{
		int i = scal;
		std::cout << "int: " << i << std::endl;
	}
	catch (std::string &ei){
		std::cout << "int: " << ei << std::endl;
	}

	// definit mon affichage en fct de ma precision
	std::cout << std::fixed << std::setprecision(scal.getPrecision());
	
	float f = scal;
	std::cout << "float: " << f << "f" << std::endl;
	
	double d = scal;
	std::cout << "double: " << d << std::endl;
	return(0);
}