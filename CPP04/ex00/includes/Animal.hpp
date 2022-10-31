/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:21:06 by lollith           #+#    #+#             */
/*   Updated: 2022/10/31 08:32:15 by agouet           ###   ########.fr       */
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

		virtual void makeSound()const; //car linkage dynamique
		std::string getType( void ) const;

	protected:

		std::string m_type;


};

#endif