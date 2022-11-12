/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:06:58 by lollith           #+#    #+#             */
/*   Updated: 2022/11/12 15:26:52 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
MutantStack<T>::MutantStack():
	std::stack<T>(){
}

template< typename T >
MutantStack<T>::MutantStack( MutantStack<T> const &copy):
	std::stack<T>(copy){
}

template< typename T >
MutantStack<T>::~MutantStack(){
	
}

template< typename T >
MutantStack<T> &MutantStack<T>::operator=( MutantStack<T> const &rhs){
	if( *this != rhs)
		this->c = rhs.c;
	return (*this);
}
//------------------------------------------------------------------------------

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void){
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void){
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void){
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin(void) const{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend(void) const{
	return (this->c.rend());
}
