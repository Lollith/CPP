/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:41 by agritech          #+#    #+#             */
/*   Updated: 2022/10/07 11:00:35 by agouet           ###   ########.fr       */
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
        ShrubberyCreationForm();
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm( ShrubberyCreationForm const &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
        
        //surcharge
        ShrubberyCreationForm(std::string target);

        //fct membre

        virtual void create(std::string target) const;
		virtual Form *newInstanceForm( void ) const;

    private: 
};

# endif