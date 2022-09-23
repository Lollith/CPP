/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:13:18 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 17:39:45 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(): Animal(){
	cout << "Dog is created" << endl;
	m_type = "Dog";
	m_brain = new Brain();
	return;
}

Dog::~Dog(){
	cout << "Dog is deleted" << endl;
	delete(m_brain);
	return;
}

Dog::Dog(Dog const &copy): Animal(copy) {
	cout << "Copy constructor is called" << endl;
	*this = copy;
}

Dog &Dog::operator=(Dog const &rhs){
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
		this->m_type = rhs.m_type;
	}
		return(*this);
}
		
void Dog::makeSound()const
{
	cout << "Waf Waf" << endl;
}



//------------------------------------------------------------------------------
