/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:36:44 by agouet            #+#    #+#             */
/*   Updated: 2022/09/22 10:50:00 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main (int ac, char const **av)
{
	Phonebook Contact1; // construction de mon objet contact1 avec initilisation (constructeur appele)

	(void) av;
	if (ac != 1)
	{
		std::cout << "Arguments" << std::endl;
		return(0);
	}

	while(Contact1.enter_cmd());


	return (0);
}
