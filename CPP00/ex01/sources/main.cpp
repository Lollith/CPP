/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:36:44 by agouet            #+#    #+#             */
/*   Updated: 2022/09/16 15:05:21 by agouet           ###   ########.fr       */
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
