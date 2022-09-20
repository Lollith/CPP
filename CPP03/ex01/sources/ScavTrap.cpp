/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:14 by agouet            #+#    #+#             */
/*   Updated: 2022/09/20 17:15:15 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void){
	std::cout << "Default constructor called" << std::endl;
	return;
}







ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	return;
}

ScavTrap::~ScavTrap(std::string name): ClapTrap(name){
	return;// destructeur??
}
