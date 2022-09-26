/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:39:57 by lollith           #+#    #+#             */
/*   Updated: 2022/09/26 13:18:31 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
using std::cout;
using std::endl;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): AAnimal()
{
	cout << "Cat is created" << endl;
	m_type = "Cat";
	m_brain = new Brain();
	return;
}

Cat::Cat( const Cat & src ) : AAnimal(src)
{
	cout << "Copy constructor is called" << endl;
	*this = src;
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

Cat &Cat::operator=( Cat const & rhs )
{
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
		this->m_type = rhs.m_type;
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
