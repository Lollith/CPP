/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:34:07 by agouet            #+#    #+#             */
/*   Updated: 2022/09/26 16:14:36 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria{

	protected:
		std::string m_type;

	public:
		AMateria( void );
		virtual~AMateria( void );
		AMateria(AMateria const &copy);
		AMateria &operator=( AMateria const &rhs);

		AMateria(std::string const &type);

		//std::string const &getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);
};


#endif
