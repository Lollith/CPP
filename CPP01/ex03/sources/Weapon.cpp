/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:16:25 by lollith           #+#    #+#             */
/*   Updated: 2022/10/11 17:45:33 by agouet           ###   ########.fr       */
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

std::string const Weapon::getType(void) const{
	return (this->m_type);
}

void Weapon::setType( std::string typex ){
	this->m_type = typex;
	return;
}
