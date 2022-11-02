/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:54 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 17:13:02 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){

	DiamondTrap botD("BotDiamond");
	
	botD.attack("bear");
	botD.takeDamage(40);
	botD.beRepaired(10);
	botD.whoAmI();
	botD.guardGate();
	botD.highFivesGuys();
	
	std::cout << std::endl;
	
	FragTrap botF("BotFrag");
	
	botF.attack("bear");
	botF.takeDamage(40);
	botF.beRepaired(10);
	botF.highFivesGuys();
	
	std::cout << std::endl;
	
	ScavTrap botS("BotScav");
	
	botS.attack("bear");
	botS.takeDamage(40);
	botS.beRepaired(10);
	botS.guardGate();

	std::cout << std::endl;


	ClapTrap botC("BotClap");
	
	botC.attack("bear");
	botC.takeDamage(40);
	botC.beRepaired(10);
	
	
	return 0;
}
