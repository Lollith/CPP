/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agritech <agritech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:41 by agritech          #+#    #+#             */
/*   Updated: 2022/10/04 17:17:20 by agritech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
class ShrubberyCreationForm: public Form{
    public:
        //canonic
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm( ShrubberyCreationForm const &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
        
        //surcharge
        ShrubberyCreationForm(std::string target);

        //fct membre

        virtual void create(std::string target) const;
		virtual void execute( Bureaucrat const &executor )const;

    private: 
        std::string const m_target;
};

# endif