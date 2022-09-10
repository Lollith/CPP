/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:01:20 by lollith           #+#    #+#             */
/*   Updated: 2022/09/10 16:15:58 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(void){
	if (this->m_name != "")
		std::cout << "You kill the zomzom "<< this->m_name << std::endl;
	return;
}

void Zombie::setName(std::string name) {
	this->m_name = name;
	return;
}

void Zombie::announce(void){
	std::cout << m_name << ": BraiiiinnnzzzZ..." << std::endl;
}