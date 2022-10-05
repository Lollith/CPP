/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/10/05 17:11:39 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

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
	Bureaucrat bob("Bob", 50);
	std::cout << bob << std::endl;
	std::cout << "Try to sign and execut: " << std::endl;
	FormA.beSigned(bob);
	bob.executeForm(FormA);
	
	return 0;
}

