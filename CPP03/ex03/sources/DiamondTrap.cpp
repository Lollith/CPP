/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:24:07 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 18:38:44 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap(){}

DiamondTrap::~DiamondTrap(){}

DiamondTrap::DiamondTrap(DiamondTrap const &copy){
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs){
	(void) rhs;
	return(*this);
}

DiamondTrap::DiamondTrap(std::string name):FragTrap(name), ScavTrap(name)
{
	this->m_name = name;
	std::cout << "DiamondTrap- Constructor called" << std::endl;
	ClapTrap::m_name = name + "_clap_name";
	this->m_hit_points = 100;
	this->m_energy_points = 50;
	this->m_attack_damage = 30;
}

void DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "I am "<< this->m_name << " et my claptrap's name: "<< ClapTrap::m_name << std::endl;
}