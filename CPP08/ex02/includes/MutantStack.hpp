/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:06:39 by lollith           #+#    #+#             */
/*   Updated: 2022/11/12 15:39:18 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

//typename constructor :Type du conteneur sous-jacent utilisé pour implémenter la pile.

template< typename T > class MutantStack : public std::stack<T>
{
	public:
//------------------------------Canonic-----------------------------------------
		MutantStack( void );
		MutantStack( MutantStack<T> const &copy );
		virtual ~MutantStack( void );
		MutantStack<T> &operator=( MutantStack<T> const &rhs );
		
//--------------------------------iterator--------------------------------------
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		iterator begin( void );
		iterator end( void );
		
		reverse_iterator rbegin( void );
		reverse_iterator rend( void );
		
		const_iterator begin( void ) const;
		const_iterator end( void ) const;
		
		const_reverse_iterator rbegin( void ) const;
		const_reverse_iterator rend( void ) const;
		
	private:
};

# include "MutantStack.tpp"

#endif
