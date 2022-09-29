/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/29 13:42:00 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "MyException.hpp"

int main(){
	Bureaucrat bob;
	std::cout << bob << std::endl;
	try
	{
		Bureaucrat bill("Bill", 200);
		std::cout << bill << std::endl;
		bill.increment(10);
		std::cout << bill << std::endl;
		bill.decrement(3);
		std::cout << bill << std::endl;
		bill.decrement(500);
		std::cout << bill << std::endl;
	}
	catch(MyException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}


	return 0;
}
