/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:34:59 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 14:24:19 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : m_name (name), m_weapon (weapon){ //initialisation de mes attribut avec les info du main, + ecriture ref int& a
	return;
}

HumanA::~HumanA(void){
	return;
}

void HumanA::attack(){
	std::cout << this->m_name << " attacks with their "<< m_weapon.getType() << std::endl;
}