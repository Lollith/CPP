/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:18:28 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 09:34:51 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

//--------------------------------------------------------- canonic------------
PresidentialPardonForm::PresidentialPardonForm(){
    return;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy): Form(copy){
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
    if (this != &rhs)
        this->m_beSigned = rhs.getBeSigned();
    return(*this);
}

//----------------------------------------------surcharge------------------------
PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential Pardon Form", 25, 5, target ){
    return;
}

void PresidentialPardonForm::create(std::string const target) const{
    std::cout << target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
