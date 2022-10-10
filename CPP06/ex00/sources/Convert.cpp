/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:01:27 by agouet            #+#    #+#             */
/*   Updated: 2022/10/10 16:13:57 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(){
	return;
}

Convert::~Convert(){
	return;
}

Convert::Convert(Convert const &copy){
	*this = copy;
}

Convert &Convert::operator=( Convert const &rhs){
	if (this != &rhs)
		return(*this);
	return(*this);
}

Convert::Convert( std::string const scalaire ):_scalaire(scalaire), _d(0){
	return;
}

 Convert::operator double(){
	this->_d = strtod(this->_scalaire.c_str(), NULL);
	return (this->_d);
}


 Convert::operator char(){
	this->_c = this->_scalaire.c_str();
	return(*(this->_c)); // avoir un char et non une chaine de char
 }


Convert::operator float(){
	char *end;
	this->_f = static_cast<float>(strtod(this->_scalaire.c_str(), &end));
	if (*end == 'f')
		return (this->_f);
	return (0);
}