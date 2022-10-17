/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:16:25 by agouet            #+#    #+#             */
/*   Updated: 2022/10/17 18:28:38 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include <iostream>
# include <string>

template <typename T>
class Array{
	public:
//-----------------------------canonic-----------------------------------------
	Array<T>( void ): _n(0) { 
		//T *tab = new T [ 0 ] ;
		std::cout << "An empty Array is created." << std::endl; 
	}

	Array<T>(Array<T> const &copy){ 
		*this = copy; 
	}

	Array<T> &operator=(Array<T> const &rhs){
		if(this != rhs)
			this->_n = rhs.get_n();
		return (*this);
	}
	~Array<T>( void ){
	}
	
//-----------------------------surcharge----------------------------------------
	Array<T>(unsigned int n): _n(n){ 
		T *tab = new T [ n ] ;
		std::cout << "An Array is created, size: "<< tab[0] << std::endl; 
	}

//--------------------------------accessor--------------------------------------
	unsigned int get_n( void )const{
		return (this->_n);
	}

	void set_n(unsigned int value){
		this->_n = value;
		return; 
	}

//-----------------------------membre-------------------------------------------
	int size( void );

	private:
		 unsigned int _n;
};

template< typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const & rhs){
	o << rhs.get_n();
	return o;
}

#endif