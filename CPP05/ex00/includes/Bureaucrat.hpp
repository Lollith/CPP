/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:24:33 by agouet            #+#    #+#             */
/*   Updated: 2022/09/29 13:52:56 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "MyException.hpp"

class Bureaucrat{

	public:
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const &copy );
		Bureaucrat &operator=( Bureaucrat const &rhs );

		std::string const getName( void ) const;
		int getGrade(void) const;
		void increment(int grade);
		void decrement(int grade);

		Bureaucrat(std::string name, int grade);
		void GradeTooHightException();
		void GradeToolowException();

	private:
		std::string const	m_name;
		int 				m_grade;

};

	std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
