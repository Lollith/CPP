/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:21:30 by lollith           #+#    #+#             */
/*   Updated: 2022/10/14 15:18:08 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	Harl level;
	int i = 0;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac < 2)
		std::cout << "Enter 1 parameter" << std::endl;
	
	else
	{
		while ( i < 4 && levels[i] != av[1])
			i++;
		switch(i)
		{
			case 0:
				level.complain("debug");
			case 1:
				level.complain("info");
			case 2:
				level.complain("warning");
			case 3:
				level.complain("error");
	
			default:
				std::cout << "[ Probably complaining about insignificant problems ]";
				std::cout << std::endl;
		}
	}
}
