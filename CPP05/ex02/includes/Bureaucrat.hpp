/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:24:33 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 09:33:28 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat{

	public:
	//classes internes
		class GradeTooHighException: public std::exception{
			virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			virtual const char *what() const throw();
		};


	//canonic
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const &copy );
		Bureaucrat &operator=( Bureaucrat const &rhs );
	//surcharge
		Bureaucrat(std::string name, int grade);
	//accessors
		std::string const getName( void ) const;
		int getGrade(void) const;

	//fct membres
		void increment(int grade);
		void decrement(int grade);
		void signForm(Form &formulaire);
		void executeForm(Form const &form);


	private:
		Bureaucrat( void );
		std::string const	m_name;
		int 				m_grade;

};

	std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
