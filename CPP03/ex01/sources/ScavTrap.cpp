/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:14 by agouet            #+#    #+#             */
/*   Updated: 2022/09/21 15:07:39 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void){
	std::cout << "Scavtrap- Default constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap( void ){
	std::cout << "Scavtrap- Destructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs){
	std::cout << "ScavTrap- Copy assignment operator called" << std::endl;
	this->m_name = rhs.m_name;
	this->m_hit_points = rhs.m_hit_points;
	this->m_energy_points = rhs.m_energy_points;
	this->m_attack_damage = rhs.m_attack_damage;
	return(*this);

	return(*this);
}

ScavTrap::ScavTrap( ScavTrap const &copy ){
	std::cout << "ScavTrap- Copy constructor called" << std::endl;
	*this = copy;
}


ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "Scavtrap- Constructor called" << std::endl;
	return;
}


void ScavTrap::attack(const std::string &target){
	std::cout << "ScavTrap- ";

	ClapTrap::attack(target);
}

void ScavTrap::guardGate(){
	std::cout <<  m_name << " enter in <Gate Keeper mode>" << std::endl;
}
