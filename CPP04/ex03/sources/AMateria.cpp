/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:11:38 by agouet            #+#    #+#             */
/*   Updated: 2022/09/27 16:50:02 by agouet           ###   ########.fr       */
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

//AMateria &AMateria::operator=(AMateria const &rhs)
// // {
// 	if (this != &rhs)
// 	{
// 		this->m_type = rhs.m_type;
// 	}
// 	return (*this);
// }

//--------------------------------------membres----------------------------------
AMateria::AMateria(std::string const &type): m_type(type){
	return;
}

//std::string const &AMateria::getType const{
//	return(this->m_type);

//}

