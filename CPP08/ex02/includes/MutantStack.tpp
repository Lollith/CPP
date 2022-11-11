/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:06:58 by lollith           #+#    #+#             */
/*   Updated: 2022/11/11 17:48:52 by agouet           ###   ########.fr       */
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

template< typename T >
typename MutantStack<T>::iterator begin(){
	return (std::stack<T>::c.begin());
} 

template< typename T >
typename MutantStack<T>::iterator end(){
	return (std::stack<T>::c.end());
}


// psa besoin de forme canoniaue
pas faire de .cpp
