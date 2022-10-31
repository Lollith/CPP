/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:14:36 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 18:18:38 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(): AMateria(){
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

Cure::Cure(std::string const &type): AMateria(type){
	_type = "cure";
	std::cout << _type <<std::endl;
	return;
}

AMateria* Cure::clone() const{
	return(new Cure());
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
	
}