/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/08/30 18:11:26 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"


Contact::Contact(void){
	//initialistion de mes var, string inutiles car objets
	return;
}

Contact::Contact(std::string nom) : m_first_name(nom){
	return;
}

Contact::~Contact(void){
	return;
}

void Contact::save(void) {

		std::cout << "first_name: " << std::endl;
		std::cin >> m_first_name ;
		std::cout << m_first_name << std::endl;
}
