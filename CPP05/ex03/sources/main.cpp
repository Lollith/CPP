/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 10:41:41 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(){
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("Robotomy Request Form", "Bender");
	Form* fake;
	fake = someRandomIntern.makeForm("fake", "bender");
	Form *tree;
	tree = someRandomIntern.makeForm("Shrubbery Creation Form", "Bender");

	delete rrf;
	delete fake;
	delete tree;
}

	return 0;
}

