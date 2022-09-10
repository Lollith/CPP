/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:57:38 by lollith           #+#    #+#             */
/*   Updated: 2022/09/10 16:15:56 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
	Zombie *newZombie;
	
		newZombie = new Zombie[N]; //operateur new[] 
	for (int i = 0; i < N; i++)
		newZombie[i].setName(name);
	return (newZombie);
}
