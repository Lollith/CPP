/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:18:28 by agouet            #+#    #+#             */
/*   Updated: 2022/10/07 11:02:29 by agouet           ###   ########.fr       */
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

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy){
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

Form *PresidentialPardonForm::newInstanceForm( void ) const {
    return(new PresidentialPardonForm(this->m_target));
}
