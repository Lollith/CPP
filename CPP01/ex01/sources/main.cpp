/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:59:44 by lollith           #+#    #+#             */
/*   Updated: 2022/09/10 16:15:51 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main ()
{
	int nbzombie = 10;
	Zombie *horde;

	horde = NULL;

	horde = zombieHorde( nbzombie, "Zarb" );
	for (int i = 0; i < nbzombie; i++)
	{	
		std::cout << "Zombie n°"<< i + 1 << ": " ;
		horde[i].announce();
	}
	delete[] horde; //appel le destructeur pour chque zombie de ma horde
	return 0;

}