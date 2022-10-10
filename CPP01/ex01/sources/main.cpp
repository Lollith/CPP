/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:59:44 by lollith           #+#    #+#             */
/*   Updated: 2022/10/10 17:23:12 by agouet           ###   ########.fr       */
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