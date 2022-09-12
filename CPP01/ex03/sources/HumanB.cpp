/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:34:45 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 14:17:30 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name) {
	return;
}

HumanB::~HumanB(){
	return;
}

void HumanB::attack(){
	std::cout << this->m_name << " attacks with their "<< m_weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &club1 ){
	this->m_weapon = &club1;
	return;
}