/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/07 19:37:04 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"


//Phonebook::Phonebook(std::string first_name) : m_contacts(first_name){
//	return;
//}

Phonebook::Phonebook(void){
	return;
}
Phonebook::~Phonebook(void){
	return;
}

void Phonebook::add(void){
	std::string	buff;

	std::cout << "enter ADD, SEARCH or EXIT: " << std::endl;
	std::cin >> buff;
	if("ADD" == buff)
		this->m_contacts.SetName();
	return;
}
