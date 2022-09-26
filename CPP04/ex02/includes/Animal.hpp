/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:21:06 by lollith           #+#    #+#             */
/*   Updated: 2022/09/26 13:16:59 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal{

	public:

		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal ( AAnimal const &copy );
		AAnimal &operator=( AAnimal const &rhs );

		virtual void makeSound()const = 0;
		std::string getType( void ) const;

	protected:

		std::string m_type;


};

#endif
