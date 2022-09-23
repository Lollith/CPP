/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:43:10 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 17:39:44 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using std::cout;
using std::endl;

Animal::Animal(){
	cout << "Animal is created" << endl;
	return;
}

Animal::~Animal(){
	cout << "Animal is deleted" << endl;
	return;
}

Animal::Animal(Animal const &copy){
	cout << "Copy constructor is called" << endl;
	*this = copy;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
		this->m_type = rhs.m_type;
	}
	return(*this);
}


void Animal::makeSound()const{
	cout << "\"Don't make noise\"" << endl;
}

std::string Animal::getType() const{
	return (this->m_type);
}