/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:20:21 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 14:48:28 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include "Animal.hpp"
#include <iostream>

class Dog : public Animal {

	public:

		Dog( void );
		~Dog( void );
		Dog ( Dog const &copy );
		Dog &operator=( Dog const &rhs );

		virtual void makeSound()const;
};

#endif