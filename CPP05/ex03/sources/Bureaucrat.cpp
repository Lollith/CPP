/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:54 by agouet            #+#    #+#             */
/*   Updated: 2022/10/06 14:09:01 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//----------------------------------exception----------------------------------
const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return("Grade too hight");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return("Grade too low");
}
//--------------------------- membres------------------------------------------
void Bureaucrat::increment(int grade){
	if (this->m_grade - grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->m_grade -= grade;
 }

void Bureaucrat::decrement(int grade)
{
	if (this->m_grade + grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->m_grade += grade;
}

void Bureaucrat::signForm(Form &formulaire){
	if(formulaire.getBeSigned())
		std::cout << this->m_name << " signed the " << formulaire.getName() << std::endl;
	else
		std::cout << this->m_name << " couldn't sign the " << formulaire.getName() << " because: " << formulaire << std::endl; 
}

void Bureaucrat::executeForm( Form const &form ){
	try{
		if (form.execute(*this))
			std::cout << "\"" << this->m_name << "\" executed " << form.getName() << std::endl;
	}
	catch( std::exception const &myE){
		std::cout << this->m_name << " couldn't execut \"" << form.getName() << "\"";
		if (form.getBeSigned())
		{
			std::cout <<" because: \""<< form.getName() << "\" is signed but ";
			std::cout << form << std::endl;
		}
		else	
			std::cerr << " because: " << myE.what() << std::endl;
	}
}
//------------------------------surcharge------------------------------

Bureaucrat::Bureaucrat(std::string name, int grade): m_name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade = grade;
	return;
}


//--------------------------canonic---------------------------
Bureaucrat::Bureaucrat(): m_name("Bob"), m_grade(150){
	return;
}

Bureaucrat::~Bureaucrat(){
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy){
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->m_grade = rhs.getGrade();
	return(*this);
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

