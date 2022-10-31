/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:12:52 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 18:14:16 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:

		Cure();
		~Cure();
		Cure(Cure const &copy);
		Cure &operator=(Cure const &rhs);

		Cure(std::string const &type);

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

#endif
