/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:18:35 by lollith           #+#    #+#             */
/*   Updated: 2022/10/10 17:08:33 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie *newZom; // tas, rmplace mon instance par instance pointeur
	Zombie *newZom1; 
	Zombie Zom; // pile

	std::cout << "- Test allocation dynamique: "<< std::endl;
	newZom = newZombie ("Zomzom1_tas");// le zomzon pourra exister en dehors du scope grace a lallocation dynamique
	newZom->announce();
	newZom1 = newZombie ("Zomzom2_tas");
	newZom1->announce();
	delete newZom; //appel du destructeur, le zonzon sera supprime uniquement a ce moment
	delete newZom1;

	std::cout << std::endl;
	std::cout << "- Test pile: "<< std::endl;
	randomChump ("Zonz1_pile"); // appel du destructeur immediatement apres, le zonzon n existe plus apres le scope de la fct
	randomChump ("Zonz2_pile");

	return (0); // lance  le destructeur 
}