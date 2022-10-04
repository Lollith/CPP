/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agritech <agritech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:24:58 by lollith           #+#    #+#             */
/*   Updated: 2022/10/04 16:29:23 by agritech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

//-----------------------classes internes---------------------------------------
const char *Form::GradeTooHightException::what() const throw(){
	return("Grade too hight");
}

const char *Form::GradeTooLowException::what() const throw(){
	return("Grade too low");
}

//---------------------------------- constructeurs------------------------------
Form::Form():m_grade_sign(0), m_grade_exec(0){
	return;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exec ):m_name(name),m_beSigned(0), m_grade_sign(grade_sign), m_grade_exec(grade_exec){
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

//----------------------------------fct membres---------------------------------
void Form::beSigned( Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->m_grade_sign)
	{
		bureaucrat.signForm(*this);
		throw Form::GradeTooLowException();
	}
	 this->m_beSigned = true;
	bureaucrat.signForm(*this);
}

//------------------------------non_member--------------------------------------
std::ostream &operator<<(std::ostream &out, Form const &rhs){
	out << "Formulaire " << rhs.getName() << ": " ;
	out <<  "Grade pour signature: "<< rhs.getGrade_sign()<<", ";
	out << "Grade pour execution: " << rhs.getGrade_exec();
	return (out);
}