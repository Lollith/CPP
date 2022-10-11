/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:34:59 by lollith           #+#    #+#             */
/*   Updated: 2022/10/11 16:29:03 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name (name), m_weapon (weapon){ //initialisation de mes attribut avec les info du main, + ecriture ref int& a
	return;
}

HumanA::~HumanA(void){
	return;
}

void HumanA::attack(){
	std::cout << this->m_name << " attacks with their "<< m_weapon.getType() << std::endl;
}