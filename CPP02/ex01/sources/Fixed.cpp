/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:35:52 by lollith           #+#    #+#             */
/*   Updated: 2022/09/15 18:34:49 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : m_fixed(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const fixed ){
	std::cout << "Int constructor called" << std::endl;
	this->m_fixed= (fixed * (1 << fractional_bits));
}

Fixed::Fixed( float const fixed){
	std::cout << "Float constructor called" << std::endl;
	this->m_fixed = roundf (fixed * (1 <<fractional_bits));
}

Fixed::Fixed(const Fixed &nbFixedAcopier){
	std::cout << "Copy constructor called" << std::endl;
	*this = nbFixedAcopier;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->m_fixed = other.getRawBits();
	return(*this);
}
		
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{ 
	return (this->m_fixed);
}

void Fixed::setRawBits ( int const raw ){
	this->m_fixed = raw;
}

float Fixed::toFloat( void ) const{
	return((float) this->m_fixed /(float) ( 1 << Fixed::fractional_bits ));
}

int Fixed::toInt( void ) const{
	return( this->m_fixed / ( 1 << Fixed::fractional_bits ));
}

std::ostream& operator << (std::ostream& o, Fixed const &rhs){
	o << rhs.toFloat();
	return (o);
}

const int Fixed::fractional_bits = 8; // initilaisation ds le cpp, pas mettre le static