/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyException.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:59:23 by agouet            #+#    #+#             */
/*   Updated: 2022/09/29 13:49:28 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <string>

#ifndef MYEXCEPTION_HPP
# define MYEXCEPTION_HPP

class MyException: public std::exception{

	public:

		MyException(std::string const &phrase) throw();
		virtual ~MyException() throw();

		virtual const char *what() const throw();

	private:
		std::string m_phrase;
};

#endif
