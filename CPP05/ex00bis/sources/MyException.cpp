/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyException.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:28:25 by agouet            #+#    #+#             */
/*   Updated: 2022/09/29 13:51:49 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyException.hpp"

 MyException::MyException(std::string const &phrase)throw(): m_phrase(phrase){
 	return;
}

MyException::~MyException()throw(){
 	return;
}

const char *MyException::what() const throw(){
	return (m_phrase.c_str());
}
