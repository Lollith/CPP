/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:49:59 by lollith           #+#    #+#             */
/*   Updated: 2022/10/06 11:43:01 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
class Bureaucrat;

class Form{ //devient abstaite

	public:
	//classes internes
		class GradeTooHightException: public std::exception{
			virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			virtual const char *what() const throw();
		};
        
		class IsNotSignedException: public std::exception{
            virtual const char *what() const throw();
        };

	//canonic
		Form();
		virtual ~Form();
		Form(Form const &copy);
		Form &operator=(Form const &rhs);
//surcharge
		Form(std::string const name, int const grade_sign, int const grade_exec, std::string const target);
	
		//accessors/
		std::string const getName( void ) const;
		bool getBeSigned( void ) const;
		int getGrade_sign( void ) const;
		int getGrade_exec( void ) const;
		void setBeSigned(int reinitialise);

		//fct membres
		void beSigned( Bureaucrat &bureaucrat);

		virtual void create( std::string const target )const = 0;
		virtual bool execute( Bureaucrat const &executor )const;



	protected: //  devient mere
		std::string const 	m_name;
		bool 				m_beSigned;
		int	const			m_grade_sign;
		int const			m_grade_exec;
        std::string const 	m_target;

};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif
