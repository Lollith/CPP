/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:47:29 by agouet            #+#    #+#             */
/*   Updated: 2022/09/26 16:05:54 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	return;
}

Ice::~Ice(){
	return;
}

// Ice::Ice(Ice const &copy){
// 	*this = copy;
// }

 //Ice &Ice::operator=(Ice const &rhs){
//	 if(this != &rhs)
//	 {
//		 this->m_type = rhs.m_type;
//	 }
//	 return (*this);
 //}

//----------------------------------------------------------------------------------

Ice::Ice(std::string const &type): AMateria(type){
	return;
}

// Ice* Ice::clone() const{
// 	Ice *copy;
// 	*this = *copy;
// }
