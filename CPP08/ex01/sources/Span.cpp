/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:59:07 by agouet            #+#    #+#             */
/*   Updated: 2022/10/19 18:30:57 by agouet           ###   ########.fr       */
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
	 _N(N) {}

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

int Span::longestSpan(){
	if (_N <= 1)
		throw std::string ("Not enougth Number.");
	sort( _storage.begin(), _storage.end());
	return (_storage[_N - 1] - _storage[0]);
}

int Span::shortestSpan(){
	if (_N <= 1)
		throw std::string ("Not enougth Number.");
	sort( _storage.begin(), _storage.end());
	
	int tmp = 10000; // valeur a mettre au mx
	int diff = 0;
	sort( _storage.begin(), _storage.end());
	for (unsigned int i = 0; i + 1 < _N; i++ ){
	diff =_storage [i + 1] - _storage[i]; 
	if(tmp > diff)
		tmp = diff;
	}
	return tmp;
}


Span &Span::my_fill_n(int max){
	(void)max;
	std::fill_n(this->_storage.begin()+1,   2, 4);
	// std::fill_n(this->_storage.begin() + 1, 1, 5);
	*this = NULL;
	return (*this);
}

