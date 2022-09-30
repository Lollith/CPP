/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:54 by agouet            #+#    #+#             */
/*   Updated: 2022/09/29 18:41:02 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//--------------------------canonic---------------------------
Bureaucrat::Bureaucrat(): m_name("Bob"), m_grade(150){
	return;
}

Bureaucrat::~Bureaucrat(){
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const&copy){
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->m_grade = rhs.getGrade();
	return(*this);
}
//------------------------------surcharge------------------------------

Bureaucrat::Bureaucrat(std::string name, int grade): m_name(name), m_grade(grade){
	Bureaucrat::GradeTooHightException();
	Bureaucrat::GradeTooLowException();
	return;
}

void Bureaucrat::GradeTooHightException(){
	if (this->m_grade < 1)
		throw MyException("Too Hight");
}

void Bureaucrat::GradeTooLowException(){
	if (this->m_grade > 150)
		throw MyException("Too low");
}

//----------------------non_member--------------------------------------
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
//------------------------------------------------------------------------

std::string const Bureaucrat::getName( void ) const{
	return(this->m_name);
}

int Bureaucrat::getGrade(void) const{
	return(this->m_grade);
}

 void Bureaucrat::increment(int grade){
	this->m_grade = this->m_grade - grade;
	Bureaucrat::GradeTooHightException();
 }

void Bureaucrat::decrement(int grade)
{
	this->m_grade = this->m_grade + grade;
	Bureaucrat::GradeTooLowException();
}
