/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:14:36 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 11:13:20 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(): AMateria(){
	_type = "cure";
	std::cout << "Cure block" << std::endl;
	return;
}

Cure::~Cure(){
	return;
}

Cure::Cure(Cure const &copy){
	*this = copy;
}

 Cure &Cure::operator=(Cure const &rhs){
	 if(this != &rhs)
		 this->_type = rhs._type;
	 return (*this);
 }

//----------------------------------------------------------------------------------

AMateria* Cure::clone() const{
	return(new Cure());
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
	
}