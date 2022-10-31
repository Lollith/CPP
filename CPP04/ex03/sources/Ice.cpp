/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:47:29 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 18:11:52 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria(){
	return;
}

Ice::~Ice(){
	return;
}

Ice::Ice(Ice const &copy){
	*this = copy;
}

 Ice &Ice::operator=(Ice const &rhs){
	 if(this != &rhs)
		 this->_type = rhs._type;
	 return (*this);
 }

//----------------------------------------------------------------------------------

Ice::Ice(std::string const &type): AMateria(type){
	_type = "ice";
	std::cout << _type <<std::endl;
	return;
}

AMateria* Ice::clone() const{
	return(new Ice());
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
	
}