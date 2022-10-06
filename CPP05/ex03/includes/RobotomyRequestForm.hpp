/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:54:02 by agouet            #+#    #+#             */
/*   Updated: 2022/10/06 13:42:07 by agouet           ###   ########.fr       */
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
        RobotomyRequestForm();
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm( RobotomyRequestForm const &copy);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
        
        //surcharge
        RobotomyRequestForm(std::string target);

        //fct membre

        virtual void create(std::string target) const;

	private:
		static int m_count; 
};

# endif