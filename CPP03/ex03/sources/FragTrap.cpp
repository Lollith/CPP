/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:34:12 by lollith           #+#    #+#             */
/*   Updated: 2022/10/24 12:00:53 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void){
	std::cout << "FragTrap- Default constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap- Destructor called" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs){
	std::cout << "FragTrap- Copy assignment operator called" << std::endl;
	this->m_name = rhs.m_name;
	return (*this);
}

FragTrap::FragTrap( FragTrap const &copy ) : ClapTrap(copy){
	std::cout << "FragTrap- Copy constructor called" << std::endl;
	*this = copy;
}


FragTrap::FragTrap(std::string name): ClapTrap(name){
	m_hit_points = 100;
	m_energy_points = 100;
	m_attack_damage = 30;
	std::cout << "FragTrap- Constructor called" << std::endl;
	return;
}

void FragTrap::attack(const std::string &target){
	if (this->m_energy_points != 0)
	{
		std::cout << "FragTrap- ";
		std::cout << this->m_name << " attacks " << target << " , causing " << m_attack_damage << " points of damage!";
		this->m_energy_points--;
		std::cout << ", Energy points = " << this->m_energy_points << std::endl;
	}
	else
		std::cout << "energy points = 0. can't do nothing"<< std::endl;
}


void 	FragTrap::beRepaired(unsigned int amount){
	if (this->m_energy_points != 0)
	{
		this->m_hit_points =  this->m_hit_points + amount;
		this->m_energy_points--;
		std::cout << this->m_name << " is repaired and gain " << amount << " of hit points. Hit points = " << this->m_hit_points;
		std::cout << ", Energy points = " << this->m_energy_points << std::endl;
	}
	else
		std::cout << "energy points = 0. can't do nothing"<< std::endl;
}


		void FragTrap::highFivesGuys(void){
			std::cout << this->m_name <<": \"Give me high five!\""<< std::endl;
		}