/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:59:07 by agouet            #+#    #+#             */
/*   Updated: 2022/11/11 18:29:12 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span( Span const &copy ){ *this = copy; }

Span &Span::operator=( Span const &rhs){
	if (this == &rhs)
		return (*this);
	else 
		return (*this);
}

Span::Span( unsigned int N ):
	 _N(N), _is_fill(0){}

std::vector<int> Span::getstorage(void) const{
	return( this->_storage );
}

void Span::addNumber(int nbr){
	if( this->_storage.size() >= _N)
		throw std::string ("Storage is already full.");
	this->_storage.push_back(nbr);
}

std::ostream &operator<<(std::ostream &o, Span const &rhs){
	for(unsigned int i = 0; i < rhs.getstorage().size(); i++)
		o <<" | " << rhs.getstorage()[i];
	return o;
}

long Span::longestSpan(){
	if (_N <= 1)
		throw std::string ("Not enougth Number.");
	sort( _storage.begin(), _storage.end());
	return (static_cast<long>(*(_storage.end() - 1)) - static_cast<long>(*(_storage.begin()))); // protege du fait que si je creer Span(5) et que  jadd pas 5 nomnbre
}

long Span::shortestSpan(){ //ATTENTION A CORRIGER // + valeur absolue
	if (_N <= 1)
		throw std::string ("Not enougth Number.");
	sort( _storage.begin(), _storage.end());
	
	long tmp = std::numeric_limits<int>::max();
	long diff = 0;
	sort( _storage.begin(), _storage.end());
		std::cout <<(static_cast<long>(*(_storage.end()-1)))<< std::endl; 
	for (unsigned int i = 0; i +1   < static_cast<long>(*(_storage.end()-1)); i++ ){
		diff =_storage [i + 1] - _storage[i];
		if(tmp > diff)
			tmp = diff;
	}
	return (tmp);
}


Span &Span::my_fill_n(unsigned int from, unsigned int until, int value ){
	if ( until > _N || from > _N)
		throw std::string("Too big, Span(max); ");
	if ( from > until)
		throw std::string( "error : from > until");
	if (_is_fill == 0)
	{
		for (unsigned int i = from; i <_N; i++)
			this->addNumber(0); // avec fill besoin dinitialiser avant sinon segfault
	}
	std::vector<int>::iterator it = this->_storage.begin() + from;
	std::fill_n(it, until, value);
	_is_fill = 1;
	return (*this);
}

