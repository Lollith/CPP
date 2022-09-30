/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:24:33 by agouet            #+#    #+#             */
/*   Updated: 2022/09/30 10:46:08 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
		Bureaucrat( void );
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


	private:
		std::string const	m_name;
		int 				m_grade;

};

	std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
