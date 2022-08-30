/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/08/30 18:38:13 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"


Phonebook::Phonebook():m_contacts("adeline"){
	return;
}

Phonebook::~Phonebook(void){
	return;
}

void Phonebook::add(void) const{
	std::string	buff;

	std::cout << "enter ADD, SEARCH or EXIT: " << std::endl;
	std::cin >> buff;
	if("ADD" == buff){
	m_contacts.save();
	}
	return;
}
