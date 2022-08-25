/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/08/25 12:41:18 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){
	return;
}

Phonebook::~Phonebook(void){
	return;
}

void Phonebook::add(void) const{
	std::string	buff;

	std::cout << "enter ADD, SEARCH or EXIT: " << std::endl;
	std::cin >> buff;
	if(buff.compare("ADD") == 0){

	}
		std::cout << buff << std::endl;
	return;
}
