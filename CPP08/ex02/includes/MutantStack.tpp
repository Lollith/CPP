/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:06:58 by lollith           #+#    #+#             */
/*   Updated: 2022/10/20 19:17:08 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
MutantStack<T>::MutantStack(): 
	std::stack<T>(){
}

template< typename T >
MutantStack<T>::MutantStack( MutantStack<T> const &copy){
	*this = copy; 
}

template< typename T >
MutantStack<T>::~MutantStack(){}

template< typename T >
MutantStack<T> &MutantStack<T>::operator=( MutantStack<T> const &rhs){
	(void) rhs;
	return (*this);
}

// template< typename T >
// typename std::stack<T>::container_type::iterator begin(){
// 	return std::stack<T>::c.begin();
// } 

// template< typename T >
// typename MutantStack<T>::container_type::iterator end(){
// 	return std::stack<T>::c.end();
// }