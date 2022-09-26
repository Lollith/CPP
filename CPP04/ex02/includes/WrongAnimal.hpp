/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:32:27 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 15:40:22 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal{

	public:

		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal ( WrongAnimal const &copy );
		WrongAnimal &operator=( WrongAnimal const &rhs );

		void makeSound()const;
		std::string getType( void ) const;

	protected:

		std::string m_type;


};

#endif