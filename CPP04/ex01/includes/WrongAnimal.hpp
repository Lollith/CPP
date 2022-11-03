/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:32:27 by lollith           #+#    #+#             */
/*   Updated: 2022/11/03 11:00:54 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal{

	public:

		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal ( WrongAnimal const &copy );
		WrongAnimal &operator=( WrongAnimal const &rhs );

		void makeSound()const;
		std::string getType( void ) const;

	protected:

		std::string m_type;


};

#endif