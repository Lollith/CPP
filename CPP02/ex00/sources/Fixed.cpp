/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:35:52 by lollith           #+#    #+#             */
/*   Updated: 2022/09/14 18:24:15 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : m_fixed(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}


Fixed::Fixed(const Fixed &nbFixedAcopier){
	std::cout << "Copy constructor called" << std::endl;
	*this = nbFixedAcopier;
}


Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return(*this);
}
		
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;

}


int Fixed::getRawBits( void ) const{ 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->m_fixed);

}
void Fixed::setRawBits ( int const raw ){
	this->m_fixed = raw;
}