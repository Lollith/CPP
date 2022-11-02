/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 09:15:27 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(){
	Bureaucrat bob;
	std::cout << bob << std::endl;
	Bureaucrat bill("Bill", 50);
	std::cout << bill << std::endl;
	bill.decrement(20);
	std::cout << bill << std::endl;

	std::cout << std::endl;

try{
	Form A("A1", 80, 20);
	std::cout << A << std::endl;
}
catch(std::exception const &myexception){
	std::cerr << "Error: " << myexception.what()<<std::endl;
}

	std::cout << std::endl;

try{
	Form B("B1", 100, 150);
	std::cout << B << std::endl;
	B.beSigned(bill);
}
catch(std::exception const &myexception){
	std::cerr << "Error: " << myexception.what()<<std::endl;
}

	std::cout << std::endl;
	
try{
	Form C("C1", 1, 150);
	std::cout << C << std::endl;
	C.beSigned(bill);
}
catch(std::exception const &myexception){
	std::cerr << "Error: " << myexception.what()<<std::endl;
}
	return 0;
}
