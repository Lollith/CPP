/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:31 by agouet            #+#    #+#             */
/*   Updated: 2022/09/22 12:21:56 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

//---------------------------Canonic-----------------------------------------------------------
ClapTrap::ClapTrap( void ){
	std::cout << "Claptrap- Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const &copy ){
	std::cout << "ClapTrap- Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &rhs ){
	std::cout << "ClapTrap- Copy assignment operator called" << std::endl;
	this->m_name = rhs.m_name;
	this->m_hit_points = rhs.m_hit_points;
	this->m_energy_points = rhs.m_energy_points;
	this->m_attack_damage = rhs.m_attack_damage;
	return(*this);
}

ClapTrap::~ClapTrap( void ){
	std::cout << "claptrap- Destructor called" << std::endl;
	return;
}


//------------------------surcharge ----------------------------------------------------------------------
ClapTrap::ClapTrap( std::string name ) : m_name(name), m_hit_points(100), m_energy_points(50), m_attack_damage(20){
	std::cout << "Claptrap- Constructor called. " << this->m_name << " is created"<<std::endl;
	return;
}



//-------------------------methodes------------------------------------------------------------------------

void	ClapTrap::attack(const std::string &target){
	if (this->m_energy_points != 0)
	{
		std::cout << this->m_name << " attacks " << target << " , causing " << this->m_attack_damage << " points of damage!";
		this->m_energy_points--;
		std::cout << ", Energy points = " << this->m_energy_points << std::endl;
	}
	else
		std::cout << "energy points = 0. can't do nothing"<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->m_hit_points = this->m_hit_points - amount;
	std::cout << this->m_name << " is taking " << amount << " damages";
	std::cout << ", Hit points = " << this->m_hit_points << std::endl;
}
void 	ClapTrap::beRepaired(unsigned int amount){
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
