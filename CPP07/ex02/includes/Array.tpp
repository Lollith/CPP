/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 08:44:19 by lollith           #+#    #+#             */
/*   Updated: 2022/11/11 14:36:45 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ne pas faire juste de .tpp, faire .hpp + .tpp => plus propre
#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include <string>

template <typename T>
class Array{
	public:
//-----------------------------canonic-----------------------------------------
	Array<T>( void ):
		 _n(0), _elements(NULL) { 
		std::cout << "An empty Array is created." << std::endl; 
	}

	Array<T>(Array<T> const &copy){ 
		std::cout << "Copy constructor called" << std::endl;
		*this = copy; 
	}

	Array<T> &operator=(Array<T> const &rhs){
		std::cout << "Assignation overload called" << std::endl;
		if(this == &rhs)
			return *this;
		this->_n = rhs.get_n();
		this->_elements = new T[this->_n];  // besoin de recreer pour mettre le bon nombre de i du lhs
		for (unsigned int i = 0; i < this->_n ; i++)	
			this->_elements[i] = rhs._elements[i];
		return (*this);
	}
	
	~Array<T>( void ){
		delete[] this->_elements;
	}
	
//-----------------------------surcharge----------------------------------------
	Array<T>(unsigned int n): 
		_n(n), _elements(NULL){ 
		if(n != 0)
			this->_elements = new T [ this->_n ] ;
		std::cout << "An Array is created, size: "<< this->_n << std::endl; 
	}
//-------------------------------operator---------------------------------------
	T &operator[]( unsigned int index)
	{
		if(index >= this->_n)
			throw std::out_of_range("Out of bound" );
		return this->_elements[index];
	}

//--------------------------------accessor--------------------------------------
	unsigned int get_n( void )const{
		return (this->_n);
	}

	T *get_elements( void )const{
		return (this->_elements);
	}
	
	void set_n(unsigned int value){
		this->_n = value;
		return; 
	}

//-----------------------------membre-------------------------------------------
	unsigned int size( void ) const{
		return (this->_n);
	}

	private:
		 unsigned int _n;
		 T *_elements;
};

template< typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &rhs){
	if (rhs.get_elements() ==  NULL)
		o << "size: " <<rhs.get_n()<< ", array[0] = NULL";
	else
		o << "size: " <<rhs.get_n();
	return o;
}

#endif