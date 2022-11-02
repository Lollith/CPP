/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:41 by agritech          #+#    #+#             */
/*   Updated: 2022/11/02 09:33:51 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
class ShrubberyCreationForm: public Form{
    public:
        //classes internes
        
        //canonic
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm( ShrubberyCreationForm const &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
        
        //surcharge
        ShrubberyCreationForm(std::string target);

        //fct membre

        virtual void create(std::string target) const;

    private: 
        ShrubberyCreationForm();
};

# endif