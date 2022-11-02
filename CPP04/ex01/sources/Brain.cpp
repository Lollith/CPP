/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:46:08 by lollith           #+#    #+#             */
/*   Updated: 2022/10/31 09:27:22 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
using std::cout;
using std::endl;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{	
	cout << "Brain is created" << endl;
	return;
}

Brain::Brain( const Brain & src )
{
	cout << "Copy constructor is called" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	cout << "Brain is deleted" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=( Brain const & rhs )
{
	if (this != &rhs)
	{
		cout << "copy assignement operator is called" << endl;
	}
		return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */