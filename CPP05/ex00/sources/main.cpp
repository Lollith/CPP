/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 09:03:28 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(){
	Bureaucrat bob;
	std::cout << bob << std::endl;
	try
	{
		Bureaucrat bill("Bill", 50);
		std::cout << bill << std::endl;
		bill.decrement(20);
		std::cout << bill << std::endl;
	}
	catch(std::exception const &myexeption){
		std::cerr <<  "Error: " << myexeption.what() << std::endl;
	}
	std::cout << std::endl;

	try{

		Bureaucrat bill("Bill", 50);
		bill.increment(500);
		std::cout << bill << std::endl;
	}
	catch(std::exception const &myexeption){
		std::cerr <<  "Error: " << myexeption.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat bill("Bill", 200);
		std::cout << bill << std::endl;
	}
	catch(std::exception const &myexeption){
		std::cerr << "Error: " << myexeption.what() << std::endl;
	}


	return 0;
}
