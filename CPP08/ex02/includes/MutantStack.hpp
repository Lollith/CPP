/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:06:39 by lollith           #+#    #+#             */
/*   Updated: 2022/11/11 17:49:44 by agouet           ###   ########.fr       */
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

		// iterator begin(){return std::stack<T>::c.begin();}
		// iterator end(){return std::stack<T>::c.end();}

		iterator begin();
		iterator end();
	private:
};

#include "MutantStack.tpp"
#endif

begin	Return iterator to beginning (public member function)
end	Return iterator to end (public member function)
rbegin	Return reverse iterator to reverse beginning (public member function)
rend	Return reverse iterator to reverse end (public member function)
cbegin	Return const_iterator to beginning (public member function)
cend	Return const_iterator to end (public member function)
crbegin	Return const_reverse_iterator to reverse beginning (public member function)
crend	Return const_reverse_iterator to reverse end (public member function)
