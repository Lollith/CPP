/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:57:56 by agouet            #+#    #+#             */
/*   Updated: 2022/10/12 17:22:35 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main (int ac, char **av)
{
	Convert scal(av[1]);
	(void) av;
	if (ac != 2)
	{
		std::cout << "1 parameter!" << std::endl; 
		return (1);
	}

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
	return(0);
}