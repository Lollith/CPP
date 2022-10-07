/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:54:02 by agouet            #+#    #+#             */
/*   Updated: 2022/10/06 13:42:07 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form{
    public:
        //classes internes
        
        //canonic
        PresidentialPardonForm();
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm( PresidentialPardonForm const &copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        
        //surcharge
        PresidentialPardonForm(std::string target);

        //fct membre

        virtual void create(std::string target) const;
		virtual Form *newInstanceForm( void ) const;

	private:
};

# endif