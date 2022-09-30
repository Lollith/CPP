/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:49:59 by lollith           #+#    #+#             */
/*   Updated: 2022/09/29 19:00:56 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>

class Form{

	public:
		Form();
		~Form();
		Form(Form const &copy);
		Form &operator=(Form const &rhs);


	private:
		std::string const 	name;
		bool 				beSigned;
		int	const			grade_sign;
		int const			grade_exec;				

};

std::ostream &operator<<(std::ostrean &out, Form const &rhs);

#endif
