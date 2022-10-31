/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:39:57 by lollith           #+#    #+#             */
/*   Updated: 2022/10/31 09:32:51 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
using std::cout;
using std::endl;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): Animal()
{
	cout << "Cat is created" << endl;
	m_type = "Cat";
	m_brain = new Brain();
	return;
}

Cat::Cat( const Cat & copy ) : Animal(copy) // explicite (copy)
{
	cout << "Copy constructor is called" << endl;
	*this = copy;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	cout << "Cat is deleted" << endl;
	delete(m_brain);
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=( Cat const &rhs )
{
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
		this->m_type = rhs.m_type;
		this->m_brain = new Brain(*(rhs.m_brain));
		
	}
		return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	cout << "Miaou" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */