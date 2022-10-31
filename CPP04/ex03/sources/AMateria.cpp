/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:11:38 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 18:05:35 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

//----------------------forme canomic------------------------------------------
AMateria::AMateria (){
	return;
}

AMateria::~AMateria(){
	return;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
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
