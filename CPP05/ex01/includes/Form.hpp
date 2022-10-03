/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:49:59 by lollith           #+#    #+#             */
/*   Updated: 2022/10/03 16:24:30 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form{

	public:
	//classes internes
		class GradeTooHightException: public std::exception{
			virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			virtual const char *what() const throw();
		};

	//canonic
		Form();
		~Form();
		Form(Form const &copy);
		Form &operator=(Form const &rhs);
//surcharge
		Form(std::string const name, int const grade_sign, int const grade_exec);
	
		//accessors/
		std::string const getName( void ) const;
		bool getBeSigned( void ) const;
		int getGrade_sign( void ) const;
		int getGrade_exec( void ) const;

		//fct membres
		void beSigned( Bureaucrat &bureaucrat );


	private:
		std::string const 	m_name;
		bool 				m_beSigned;
		int	const			m_grade_sign;
		int const			m_grade_exec;

};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif
