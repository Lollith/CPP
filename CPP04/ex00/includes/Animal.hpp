/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:21:06 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 15:26:55 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal{

	public:

		Animal( void );
		virtual ~Animal( void );
		Animal ( Animal const &copy );
		Animal &operator=( Animal const &rhs );

		virtual void makeSound()const;
		std::string getType( void ) const;

	protected:

		std::string m_type;


};

#endif