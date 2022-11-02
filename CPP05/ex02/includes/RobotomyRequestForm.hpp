/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:54:02 by agouet            #+#    #+#             */
/*   Updated: 2022/11/02 09:33:05 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
class RobotomyRequestForm: public Form{
    public:
        //classes internes
        
        //canonic
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm( RobotomyRequestForm const &copy);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
        
        //surcharge
        RobotomyRequestForm(std::string target);

        //fct membre

        virtual void create(std::string target) const;

	private:
        RobotomyRequestForm();
		static int m_count; 
};

# endif