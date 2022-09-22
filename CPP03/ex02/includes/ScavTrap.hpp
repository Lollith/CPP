/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:52:54 by agouet            #+#    #+#             */
/*   Updated: 2022/09/22 14:30:13 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:

		ScavTrap( void );
		ScavTrap( ScavTrap const &copy );
		ScavTrap &operator=( ScavTrap const &rhs );
		~ScavTrap( void );

		ScavTrap(std::string name);
		void attack(const std::string &target);
		void guardGate();

};

#endif
