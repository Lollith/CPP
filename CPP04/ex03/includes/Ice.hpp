/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:47:31 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 11:12:28 by agouet           ###   ########.fr       */
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

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

#endif
