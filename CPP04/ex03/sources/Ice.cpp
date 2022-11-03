/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:47:29 by agouet            #+#    #+#             */
/*   Updated: 2022/11/03 08:40:08 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria(){
	_type = "ice";
	std::cout << "Ice block" << std::endl;
	return;
}

Ice::~Ice(){
	return;
}

Ice::Ice(Ice const &copy): AMateria(copy){
	*this = copy;
}

 Ice &Ice::operator=(Ice const &rhs){
	 if(this != &rhs)
		 this->_type = rhs._type;
	 return (*this);
 }

//----------------------------------------------------------------------------------

AMateria* Ice::clone() const{
	return(new Ice());
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
	
}