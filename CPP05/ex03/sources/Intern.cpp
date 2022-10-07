/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:47:47 by agouet            #+#    #+#             */
/*   Updated: 2022/10/07 11:45:52 by agouet           ###   ########.fr       */
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
	if (this != &rhs)
		return(*this);
	return(*this);
}


Form *Intern::makeForm(std::string nameForm, std::string target){
	RobotomyRequestForm robot(target);
	ShrubberyCreationForm tree(target);
	PresidentialPardonForm pres(target);

	Form *fct_member[] = {&robot, &tree, &pres};
	std::string funct_names[] = {"Robotomy Request Form", "Shrubbery Creation Form", "Presidential Pardon Form"};
	
	for(int i = 0; i < 3; i++)
	{
		if (funct_names[i] == nameForm)
		{	
			std::cout << "Intern creates " << nameForm << " for " << target << std::endl;
			return(fct_member[i]->newInstanceForm()); //new +class
		}
	}
	std::cout << "Error: Intern doesn't recognize this form." << std::endl;
	return(NULL);	

}