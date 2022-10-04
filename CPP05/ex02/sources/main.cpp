/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agritech <agritech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:16 by agouet            #+#    #+#             */
/*   Updated: 2022/10/04 16:59:58 by agritech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	Bureaucrat bill("Bill", 50);
	std::cout << bill << std::endl;

	ShrubberyCreationForm FormA("Jardin");
	FormA.execute(bill);
	return 0;
}
