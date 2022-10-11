/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:28:53 by lollith           #+#    #+#             */
/*   Updated: 2022/10/11 16:48:09 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("bazooka");
		bob.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	{
		// weapon initialised  NULL
		HumanB joe("Joe");
		joe.attack();
	}
	
	return 0;
}

//humanB utilisation des pointeur pour associer optionnellement 2 classes
// humain A: lasssociation est systematique, dc on peut utiliser les references , on pourra initialiser le weapon
// une ref doit etre initialisee et ne peut etre reafectee