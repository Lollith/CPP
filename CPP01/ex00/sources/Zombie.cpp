/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:01:20 by lollith           #+#    #+#             */
/*   Updated: 2022/10/10 17:11:04 by agouet           ###   ########.fr       */
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