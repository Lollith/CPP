/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/08/28 18:24:35 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void): m_nb_contacts(0){
	return;
}

Phonebook::~Phonebook(void){
	return;
}

void Phonebook::add(void) const{
	std::string	buff;
		std::string  m_first_nam;

	std::cout << "enter ADD, SEARCH or EXIT: " << std::endl;
	std::cin >> buff;
	if("ADD" == buff){
		std::cout << "first_name: " << std::endl;
		std::cin >> m_first_nam;
	}
		std::cout << buff << std::endl;
	return;
}
