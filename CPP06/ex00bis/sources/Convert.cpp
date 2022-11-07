/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:01:27 by agouet            #+#    #+#             */
/*   Updated: 2022/11/07 10:10:29 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
# include <limits>
# include <math.h>  

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
	{
		this->_d = rhs._d;
		this->_c = rhs._c;
		this->_f = rhs._f;
		this->_i = rhs._i;
		this->precision = rhs.precision;
	}
	return(*this);
}

size_t Convert::getPrecision( void ) const{
	return (this->precision);
}

//utilisation de strtod, converti un  char* vers du double

// initialisation et check la fin de ma chaine
Convert::Convert( std::string const scalaire ):_scalaire(scalaire), _d(0), _f(0), _i(0), precision(1){
	char *end = NULL;
	strtod(this->_scalaire.c_str(), &end);
	std::string s_end(end);
	if (s_end.length() >= 1)
		if (s_end != "f")
			throw std::string ("Scalar only");
	return;
}

 Convert::operator double(){
	to_convert();	
	return (this->_d);
}

 Convert::operator char(){
	char *end;
	this->_c = static_cast<char>(*(this->_scalaire.c_str()));
	this->_d = strtod(this->_scalaire.c_str(), &end);
	if (*end == 'f')
		throw std::string("*");
	if(static_cast<double>(this->_d) >= std::numeric_limits<double>::infinity() ||
	 _d <= -std::numeric_limits<double>::infinity() || std::isnan(_d))
		throw std::string("impossible");
	if (!isprint(this->_c) || isdigit(this->_c) || this->_c == '+' || this->_c == '-') 
		throw std::string("Non displayable");
	return(this->_c); 
 }

Convert::operator int(){
	to_convert();	
	
	if(this->_d >= std::numeric_limits<int>::max() ||
	_d <= -std::numeric_limits<int>::max() || std::isnan(_d))
		throw std::string("impossible");	 
	return (this->_i);
}

Convert::operator float(){
	to_convert();	
	return (this->_f);
}

void Convert::to_convert(){
	char *end = NULL;
	this->_d = strtod(this->_scalaire.c_str(), &end);
	if (this->_d == 0 && *end)
	{
		this->_i = static_cast<int>(*end);
		this->_f = static_cast<int>(*end);
		this->_d = static_cast<int>(*end);
	}
	else
	{	
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
		this->_d = static_cast<double>(this->_d);
	}
}

void Convert::define_precision()
{
	size_t position_ = _scalaire.find(".");
	
	if (position_ != std::string::npos)
		this->precision = _scalaire.length() - position_ - 1;
	char *end = NULL;
	this->_d = strtod(this->_scalaire.c_str(), &end);
	if (this->_d != 0 && (*end))
		this->precision --;
}
