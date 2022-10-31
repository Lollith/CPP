/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:47:31 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 18:13:32 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:

		Ice();
		~Ice();
		Ice(Ice const &copy);
		Ice &operator=(Ice const &rhs);

		Ice(std::string const &type);

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

#endif
