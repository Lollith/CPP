/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:42:00 by lollith           #+#    #+#             */
/*   Updated: 2022/09/09 19:07:53 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
	Zombie* newZombie;

	newZombie = new Zombie();
	newZombie->setName(name);
	
	return (newZombie);
}

//=> utilisation en dehors du scope , la fct annouce est utilise ds le main