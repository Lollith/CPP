/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:52:54 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 16:32:46 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{

	public:

		ScavTrap( ScavTrap const &copy );
		ScavTrap &operator=( ScavTrap const &rhs );
		virtual ~ScavTrap( void );

		ScavTrap(std::string name);
		void attack(const std::string &target);
		void guardGate();

	protected:	
		ScavTrap( void );

};

#endif
