/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:54 by agouet            #+#    #+#             */
/*   Updated: 2022/09/21 15:05:25 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

	ScavTrap bot2("Bot");
	bot2.attack("bear");
	bot2.takeDamage(30);
	bot2.takeDamage(30);
	bot2.takeDamage(30);
	bot2.beRepaired(10);
	bot2.guardGate();
	return 0;
}
