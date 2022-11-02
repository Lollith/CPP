/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:52:54 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 08:15:49 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:

		ScavTrap( ScavTrap const &copy );
		ScavTrap &operator=( ScavTrap const &rhs );
		~ScavTrap( void );

		ScavTrap(std::string name);
		void attack(const std::string &target);
		void guardGate();
		
	private:
		ScavTrap( void ); // importance de mettre en prive si j initialise pas correctement

};

#endif
