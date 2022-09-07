/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/07 19:14:02 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(void){
	//initialistion de mes var, string inutiles car objets
	return;
}

//Contact::Contact(std::string nom) : m_first_name(nom){
//	return;
//}

Contact::~Contact(void){
	return;
}

void Contact::SetName( ){

		std::cout << "first_name: " << std::endl;
		std::cin >> this->m_first_name;
		std::cout << m_first_name << std::endl;
		return;
}
