/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:43:10 by lollith           #+#    #+#             */
/*   Updated: 2022/09/26 13:15:07 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using std::cout;
using std::endl;

AAnimal::AAnimal(){
	cout << "Animal is created" << endl;
	return;
}

AAnimal::~AAnimal(){
	cout << "Animal is deleted" << endl;
	return;
}

AAnimal::AAnimal(AAnimal const &copy){
	cout << "Copy constructor is called" << endl;
	*this = copy;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
		this->m_type = rhs.m_type;
	}
	return(*this);
}


void AAnimal::makeSound()const{
	cout << "\"Don't make noise\"" << endl;
}

std::string AAnimal::getType() const{
	return (this->m_type);
}
