/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/29 18:41:00 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "MyException.hpp"

int main(){
	Bureaucrat bob;
	std::cout << bob << std::endl;
	try
	{
		Bureaucrat bill("Bill", 1);
		std::cout << bill << std::endl;
		bill.decrement(20);
		std::cout << bill << std::endl;
		bill.increment(500);
		std::cout << bill << std::endl;
	}
	catch(MyException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}


	return 0;
}
