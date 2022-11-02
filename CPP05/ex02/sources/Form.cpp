/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:24:58 by lollith           #+#    #+#             */
/*   Updated: 2022/11/02 10:28:51 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "color.h"

//-----------------------classes internes---------------------------------------
const char *Form::GradeTooHightException::what() const throw(){
	return("Grade too hight");
}

const char *Form::GradeTooLowException::what() const throw(){
	return("Grade too low");
}

const char *Form::IsNotSignedException::what() const throw(){
    return("Form is not signed");
}

//---------------------------------- constructeurs------------------------------
Form::Form():m_grade_sign(0), m_grade_exec(0){
	return;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exec, std::string const target ):m_name(name),m_beSigned(0), m_grade_sign(grade_sign), m_grade_exec(grade_exec), m_target(target){
	return;
}

Form::~Form(){
	return;
}

Form::Form(Form const &copy):m_grade_sign(0), m_grade_exec(0){
	*this = copy;
}

//--------------------------------------operators-------------------------------
Form &Form::operator=(Form const &rhs){
	if (this != &rhs)
		this->m_beSigned = rhs.getBeSigned();
	return(*this);
}

//--------------------------------accessors-------------------------------------
std::string const Form::getName() const{
	return(this->m_name);
}

bool Form::getBeSigned() const{
	return(this->m_beSigned);
}

int Form::getGrade_sign() const{
	return(this->m_grade_sign);

}
	
int Form::getGrade_exec( void ) const{
	return(this->m_grade_exec);
}

void Form::setBeSigned(int reinitialise){
	this->m_beSigned = reinitialise;
}

//----------------------------------fct membres---------------------------------
void Form::beSigned( Bureaucrat &bureaucrat){
	try { 
		if (bureaucrat.getGrade() > this->m_grade_sign)
			throw Form::GradeTooLowException();
		else
	 		this->m_beSigned = true;
	}
	catch( std::exception const &myE){
 	std::cerr << RED <<"Error exception: " << myE.what() << RES << std::endl;
 	}
	bureaucrat.signForm(*this);
}

bool Form::execute( Bureaucrat const &executor )const{
    if (this->getBeSigned() == 0)
      throw Form::IsNotSignedException();
    if( executor.getGrade() > this->m_grade_exec )
        throw Form::GradeTooLowException();
    else
	{
		try{
        	create(this->m_target);
		}
		catch(std::string const& msg){
			std::cerr << RED << msg << RES <<std::endl;
			return false;
		}
	}
    return (true);
}
//------------------------------non_member--------------------------------------
std::ostream &operator<<(std::ostream &out, Form const &rhs){
	out << "The " << rhs.getName() <<" has " ;
	out <<  "Grade for signature: "<< rhs.getGrade_sign()<<" and ";
	out << "Grade for execution: " << rhs.getGrade_exec();
	return (out);
}