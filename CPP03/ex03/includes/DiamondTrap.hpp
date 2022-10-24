/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:24:00 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 16:31:50 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include<string>
# include<iostream> 
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"


class DiamondTrap: public FragTrap, public ScavTrap{
	public:
		virtual ~DiamondTrap();
		DiamondTrap(DiamondTrap const &copy);
		DiamondTrap &operator=(DiamondTrap const &rhs);
		

		DiamondTrap(std::string name);
		void attack(const std::string &target);
		void whoAmI();

	private:
		DiamondTrap(); // non utilise
		std::string m_name;
};

#endif