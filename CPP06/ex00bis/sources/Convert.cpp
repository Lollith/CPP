/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:01:27 by agouet            #+#    #+#             */
/*   Updated: 2022/10/12 18:34:41 by agouet           ###   ########.fr       */
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

Convert::Convert( std::string const scalaire ):_scalaire(scalaire), _d(0), _f(0), _i(0){
	return;
}



 Convert::operator double(){
	this->_d = strtod(this->_scalaire.c_str(), NULL);
	return (this->_d);
}


 Convert::operator char(){
	this->_c = static_cast<char>(*(this->_scalaire.c_str()));
	Convert::to_convert();
	if(static_cast<double>(this->_d) == std::numeric_limits<double>::infinity() ||
	 _d == -std::numeric_limits<double>::infinity() || std::isnan(_d))
		throw std::string("impossible");
	if (!isprint(this->_c) || isdigit(this->_c) )
		throw std::string("Non displayable");
	return(this->_c); 
 }

Convert::operator int(){
	char *end = NULL;
	this->_d = strtod(this->_scalaire.c_str(), &end);
	std::string s(end);
	if (s.length())
		this->_i = static_cast<int>(*end);
	else	
		this->_i = static_cast<int>(this->_d);
	
	if(this->_i == std::numeric_limits<int>::infinity() ||
	_i == -std::numeric_limits<int>::infinity() || std::isnan(_i))
		throw std::string("impossible");	 
	return (this->_i);
}

Convert::operator float(){
	char *end;
	this->_d = static_cast<float>(strtod(this->_scalaire.c_str(), &end));
	if (*end == 'f')
		return (this->_f);
	return (0);
}


double Convert::to_convert(){
	this->_d = strtod(this->_scalaire.c_str(), NULL);
	return (this->_d);
}