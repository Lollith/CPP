/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:11:38 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 14:27:59 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

//----------------------forme canomic------------------------------------------
AMateria::AMateria (){
	// std::cout << "AMateria create" << std::endl; 
	return;
}

AMateria::~AMateria(){
	return;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "AMateria cp" << std::endl; 
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	std::cout << "AMateria assign" << std::endl; 
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

//--------------------------------------surcharges et accessor----------------------------------
AMateria::AMateria(std::string const &type): _type(type){
	return;
}

std::string const &AMateria::getType() const{
	return(this->_type);
}

//--------------------------------------membres----------------------------------
void AMateria::use(ICharacter& target){
	(void)target;	
}
