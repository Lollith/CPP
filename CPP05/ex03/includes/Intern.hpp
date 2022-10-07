/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:36:10 by agouet            #+#    #+#             */
/*   Updated: 2022/10/07 10:39:36 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp" 

class Intern{
	public:
		Intern();
		~Intern();
		Intern( Intern const &copy);
		Intern &operator=(Intern const &rhs);

		Form *makeForm(std::string nameForm, std::string target);


	private:

};

#endif