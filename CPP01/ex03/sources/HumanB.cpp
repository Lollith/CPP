/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:34:45 by lollith           #+#    #+#             */
/*   Updated: 2022/10/11 16:51:32 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name), m_weapon(NULL) { // m_weapon non obligtoire = pointeur deja initialise a NULL 
	return;
}

HumanB::~HumanB(){
	return;
}

void HumanB::attack(){
	if (m_weapon == NULL)
		std::cout << this->m_name << " attacks with their hand" << std::endl;
	else
		std::cout << this->m_name << " attacks with their "<< m_weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &club1 ){
	this->m_weapon = &club1;
	return;
}