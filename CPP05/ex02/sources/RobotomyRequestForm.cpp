/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:06:19 by agouet            #+#    #+#             */
/*   Updated: 2022/10/06 14:32:43 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

//--------------------------------------------------------- canonic------------
RobotomyRequestForm::RobotomyRequestForm(){
    return;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy){
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
    if (this != &rhs)
        this->m_beSigned = rhs.getBeSigned();
    return(*this);
}

//----------------------------------------------surcharge------------------------
RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy Request Form", 72, 45, target ){
    return;
}

void RobotomyRequestForm::create(std::string const target) const{
    std::cout << "*BRRR VRRRRR*" << std::endl;
	this->m_count++;
	if(m_count % 2 == 0)
		throw std::string("Robotomisation failure");
	else
		std::cout << target << " has been robotomized" << std::endl;
}

int RobotomyRequestForm::m_count = 1;