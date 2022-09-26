/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:20:21 by lollith           #+#    #+#             */
/*   Updated: 2022/09/26 13:18:08 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
# include <string>
#include <iostream>
# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	public:

		Dog( void );
		~Dog( void );
		Dog ( Dog const &copy );
		Dog &operator=( Dog const &rhs );

		virtual void makeSound()const;

	private:

		Brain *m_brain;
};

#endif
