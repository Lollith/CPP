/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:01:20 by lollith           #+#    #+#             */
/*   Updated: 2022/09/09 11:38:55 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(void){
	return;
}

void Zombie::announce(void){
	std::cout << m_name << ": BraiiiinnnzzzZ..." << std::endl;
}