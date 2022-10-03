/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/10/03 16:49:40 by agouet           ###   ########.fr       */
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
try{
	Form A("A1", 80, 20);
	std::cout << A << std::endl;
	A.beSigned(bill);
	std::cout << A.getBeSigned() << std::endl;
}
catch(std::exception const &myexception){
	std::cerr << "Error: " << myexception.what()<<std::endl;

}
	return 0;
}
