/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 10:26:31 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
#include "color.h"

int main(){
	ShrubberyCreationForm FormA("Jardin");
	std::cout << GRNB <<FormA << RES <<std::endl;

	Bureaucrat bill("Bill", 150);
	std::cout << BBLU << bill << RES <<std::endl;

	std::cout << std::endl;
	
	std::cout << BLU <<"Try to execut without the signature: " << RES << std::endl;
	bill.executeForm(FormA);
		
	std::cout << std::endl;
	std::cout << BLU <<"Try to sign and execut: " << RES <<std::endl;
	FormA.beSigned(bill);
	bill.executeForm(FormA);
	std::cout << std::endl;
	std::cout << std::endl;

	FormA.setBeSigned(0);
	Bureaucrat berth("Berth", 140);
	std::cout << BBLU <<berth << RES << std::endl;
	std::cout << BLU <<"Try to sign and execut: "<< RES << std::endl;
	FormA.beSigned(berth);
	berth.executeForm(FormA);

 	std::cout << std::endl;
 	std::cout << std::endl;

	FormA.setBeSigned(0);
	Bureaucrat bob("Bob", 40);
	std::cout << BBLU <<bob << RES << std::endl;
	std::cout << BLU <<"Try to sign and execut: "<< RES << std::endl;
	FormA.beSigned(bob);
	bob.executeForm(FormA);
 	
	std::cout << std::endl;
 	std::cout << std::endl;
	
	RobotomyRequestForm FormB("Bill");
	std::cout << GRNB << FormB << RES <<std::endl;

	std::cout << std::endl;
	
	std::cout << BBLU <<bob << RES<<std::endl;
	std::cout << BLU <<"Try to sign and execut: "<< RES << std::endl;
	FormB.beSigned(bob);
	bob.executeForm(FormB);
	std::cout << std::endl;
	std::cout << BLU <<"Try to execut again: "<< RES << std::endl;
	bob.executeForm(FormB);

	std::cout << std::endl;
 	std::cout << std::endl;

	PresidentialPardonForm FormC ("Berth");
	std::cout << GRNB << FormC << RES <<std::endl;
 	std::cout << std::endl;
	Bureaucrat boss("Boss", 1);
	std::cout << BBLU <<boss << RES <<std::endl;
	std::cout << BLU <<"Try to sign and execut: "<< RES << std::endl;
	FormC.beSigned(boss);
	boss.executeForm(FormC);
	
	return 0;
}

