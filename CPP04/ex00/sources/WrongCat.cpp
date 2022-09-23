/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:15:24 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 15:40:26 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
using std::cout;
using std::endl;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(): WrongAnimal()
{
	cout << "WrongCat is created" << endl;
	m_type = "WrongCat";
	return;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	cout << "Copy constructor is called" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	cout << "WrongCat is deleted" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &WrongCat::operator=( WrongCat const & rhs )
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

void WrongCat::makeSound() const
{
	cout << "Miaou" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */