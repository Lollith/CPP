/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:31:13 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 15:40:25 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(){
	cout << "WrongAnimal is created" << endl;
	return;
}

WrongAnimal::~WrongAnimal(){
	cout << "WrongAnimal is deleted" << endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	cout << "Copy constructor is called" << endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
		this->m_type = rhs.m_type;
	}
	return(*this);
}


void WrongAnimal::makeSound()const{
	cout << "\"Don't make noise\"" << endl;
}

std::string WrongAnimal::getType() const{
	return (this->m_type);
}