/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/10/06 14:28:15 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(){
	

	ShrubberyCreationForm FormA("Jardin");

	Bureaucrat bill("Bill", 150);
	std::cout << bill << std::endl;

	std::cout << "Try to execut without the signature: " << std::endl;
	bill.executeForm(FormA);
		
	std::cout << std::endl;
	std::cout << "Try to sign and execut: " << std::endl;
	FormA.beSigned(bill);
	bill.executeForm(FormA);
	std::cout << std::endl;
	std::cout << std::endl;

	FormA.setBeSigned(0);
	Bureaucrat berth("Berth", 140);
	std::cout << berth << std::endl;
	std::cout << "Try to sign and execut: " << std::endl;
	FormA.beSigned(berth);
	berth.executeForm(FormA);

 	std::cout << std::endl;
 	std::cout << std::endl;

	FormA.setBeSigned(0);
	Bureaucrat bob("Bob", 40);
	std::cout << bob << std::endl;
	std::cout << "Try to sign and execut: " << std::endl;
	FormA.beSigned(bob);
	bob.executeForm(FormA);
 	
	std::cout << std::endl;
 	std::cout << std::endl;
	
	RobotomyRequestForm FormB("Bill");
	std::cout << bob << std::endl;
	std::cout << "Try to sign and execut: " << std::endl;
	FormB.beSigned(bob);
	bob.executeForm(FormB);
	std::cout << std::endl;
	std::cout << "Try to execut again: " << std::endl;
	bob.executeForm(FormB);


	std::cout << std::endl;
 	std::cout << std::endl;
	PresidentialPardonForm FormC ("Berth");
	Bureaucrat boss("Boss", 1);
	std::cout << boss << std::endl;
	std::cout << "Try to sign and execut: " << std::endl;
	FormC.beSigned(boss);
	boss.executeForm(FormC);
	

	return 0;
}

