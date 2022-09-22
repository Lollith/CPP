/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/22 10:49:57 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){//initialistion de mes var, string inutiles car objets
	return;
}

Contact::~Contact(void){
	return;
}

std::string Contact::GetFirstName(void) const {
	return this->m_first_name;
}

std::string Contact::GetLastName(void) const {
	return this->m_last_name;
}

std::string Contact::GetNickName(void) const {
	return this->m_nickname;
}

std::string Contact::GetNumber(void) const {
	return this->m_number;
}

std::string Contact::GetDark(void) const {
	return this->m_darkest_secret;
}

bool Contact::SetFirstName( ){

		std::cout << "First_name: ";
		std::cin >> this->m_first_name;
		if(std::cin.eof())
			return false;
		return true;
}

void Contact::SetLastName( ){

		std::cout << "Last_name: ";
		std::cin >> this->m_last_name;
		return;
}

void Contact::SetNickName( ){

		std::cout << "Nickname: ";
		std::cin >> this->m_nickname;
		return;
}

void Contact::SetNumber( ){

		std::cout << "Number: ";
		std::cin >> this->m_number;
		return;
}

void Contact::SetDark( ){

		std::cout << "Darkest_secret: ";
		std::cin >> this->m_darkest_secret;
		return;
}