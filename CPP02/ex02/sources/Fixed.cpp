/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:35:52 by lollith           #+#    #+#             */
/*   Updated: 2022/10/21 09:37:48 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

/*----------------------------------------------------------------------------*/
/*                 Constructors												  */
/*----------------------------------------------------------------------------*/
Fixed::Fixed( void ) : m_fixed(0) {
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const fixed ){
	//std::cout << "Int constructor called" << std::endl;
	this->m_fixed = (fixed * (1 << this->fractional_bits));
}

Fixed::Fixed( float const fixed ){
	//std::cout << "Float constructor called" << std::endl;
	this->m_fixed = roundf (fixed * (1 << this->fractional_bits));
}

/*----------------------------------------------------------------------------*/
/*						Destructor											  */
/*----------------------------------------------------------------------------*/
Fixed::~Fixed( void ) {
	//std::cout << "Destructor called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*						Copy constructor                                      */
/*----------------------------------------------------------------------------*/
Fixed::Fixed( Fixed const& nbFixedAcopier ){
	//std::cout << "Copy constructor called" << std::endl;
	*this = nbFixedAcopier;
}

/*----------------------------------------------------------------------------*/
/*						Copy assignment operator							  */
/*----------------------------------------------------------------------------*/
Fixed& Fixed::operator=( Fixed const& other ){
//	std::cout << "Copy assignment operator called" << std::endl;
	this->m_fixed = other.getRawBits();
	return(*this);
}

/*----------------------------------------------------------------------------*/
/*					Accessors												  */
/*----------------------------------------------------------------------------*/
int Fixed::getRawBits( void ) const{
	return (this->m_fixed);
}

void Fixed::setRawBits ( int const raw ){
	this->m_fixed = raw;
}

/*----------------------------------------------------------------------------*/
/*                    Methodes ex1                                            */
/*----------------------------------------------------------------------------*/
float Fixed::toFloat( void ) const{
	return((float) this->m_fixed /(float) ( 1 << Fixed::fractional_bits ));
}

int Fixed::toInt( void ) const{
	return( this->m_fixed / ( 1 << Fixed::fractional_bits ));
}

/*----------------------------------------------------------------------------*/
/*					Operator redir flux										  */
/*----------------------------------------------------------------------------*/
std::ostream& operator<< (std::ostream& o, Fixed const &instance){
	o << instance.toFloat();
	return (o);
}

/*----------------------------------------------------------------------------*/
/*				comparison Operator											  */
/*----------------------------------------------------------------------------*/

bool Fixed::operator>( Fixed const& rhs) const {
	return ( this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<( Fixed const& rhs) const {
	return ( this->toFloat()  < rhs.toFloat());
}

bool Fixed::operator<=( Fixed const& rhs) const{
	return ( this->toFloat()  <= rhs.toFloat());
}

bool Fixed::operator>=( Fixed const& rhs) const{
	return ( this->toFloat()  >= rhs.toFloat());
}

bool Fixed::operator==( Fixed const& rhs) const{
	return ( this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=( Fixed const& rhs) const{
	return ( this->toFloat() != rhs.toFloat());
}

/*----------------------------------------------------------------------------*/
/*				arithm Operator												  */
/*----------------------------------------------------------------------------*/
Fixed Fixed::operator+(Fixed const& rhs) const{
	return (Fixed( this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const& rhs) const{
	return (Fixed( this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const& rhs) const{
	return (Fixed( this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const& rhs) const{
	return (Fixed( this->toFloat() / rhs.toFloat()));
}

/*----------------------------------------------------------------------------*/
/*				increment /decrement Operator								  */
/*----------------------------------------------------------------------------*/
Fixed &Fixed::operator++() {
	this->m_fixed++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed &Fixed::operator--() {
	m_fixed--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	return(Fixed ( --*this ));
}
/*----------------------------------------------------------------------------*/
/*        AD-HOC polymorphism && static										  */
/*----------------------------------------------------------------------------*/

Fixed Fixed::min( Fixed const &fixed_l, Fixed const &fixed_r){
	if (fixed_l > fixed_r)
		return(fixed_r);
	else
		return(fixed_l);
}

Fixed Fixed::min( Fixed &fixed_l, Fixed &fixed_r){
	if (fixed_l > fixed_r)
		return(fixed_r);
	else
		return(fixed_l);
}

Fixed Fixed::max( Fixed const &fixed_l, Fixed const &fixed_r){
	if (fixed_l > fixed_r)
		return(fixed_l);
	else
		return(fixed_r);
}

Fixed Fixed::max( Fixed &fixed_l, Fixed &fixed_r){
	if (fixed_l > fixed_r)
		return(fixed_l);
	else
		return(fixed_r);
}
/*----------------------------------------------------------------------------*/
/*							Statics Initialisation							  */
/*----------------------------------------------------------------------------*/
const int Fixed::fractional_bits = 8;
