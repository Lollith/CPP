/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:47:47 by agouet            #+#    #+#             */
/*   Updated: 2022/10/06 17:39:22 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//--------------------------canonic---------------------------
Intern::Intern(){
	return;
}

Intern::~Intern(){
	return;
}

Intern::Intern(Intern const& copy){
	*this = copy;
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	//if (this != &rhs)
//		this->m_name = rhs.getName();

	return(*this);
}


Form *Intern::makeForm(std::string nameForm, std::string target){
	
	Form *newForm = NULL;
	Form *fct_member[] = { new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};

	std::string funct_names[] = {"Robotomy Request Form", "Shrubbery Creation Form", "Presidential Pardon Form"};
	
	for(int i = 0; i < 3; i++)
	{
		if (funct_names[i] == nameForm)
			newForm = fct_member[i]; //new + class
	}
	// attention penser a delete car g creer des new pour chaque 
	

	std::cout << "Intern creates " << nameForm << std::endl;
		return(newForm);
}