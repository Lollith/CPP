/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:06:39 by lollith           #+#    #+#             */
/*   Updated: 2022/10/20 19:17:09 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <stack>
#include <iterator> 
//typename constructor :Type du conteneur sous-jacent utilisé pour implémenter 
//la pile. La valeur par défaut est la classe deque<Type>.
template< typename T > class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack( MutantStack<T> const &copy);
		virtual ~MutantStack();
		MutantStack<T> &operator=(MutantStack<T> const &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(){return std::stack<T>::c.begin();}
		iterator end(){return std::stack<T>::c.end();}

	private:
};

#include "MutantStack.tpp"
#endif