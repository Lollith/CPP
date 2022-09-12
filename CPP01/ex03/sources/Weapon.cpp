/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:16:25 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 13:57:57 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){
	return;
}

Weapon::Weapon( std::string type ): m_type( type ){
	return;
}

Weapon::~Weapon( void ){
	return;
}

std::string Weapon::getType(void) const{
	return (this->m_type);
}

void Weapon::setType( std::string typex ){
	this->m_type = typex;
	return;
}
