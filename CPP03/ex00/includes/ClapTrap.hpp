/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:02 by agouet            #+#    #+#             */
/*   Updated: 2022/09/20 15:57:52 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap{

	public:

		ClapTrap(void);
		ClapTrap(ClapTrap const &copy);
		ClapTrap &operator=( ClapTrap const &rhs);
		~ClapTrap(void);

		ClapTrap( std::string name );
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


	private:

		std::string		m_name;
		unsigned int 	m_hit_points;
		unsigned int	m_energy_points;
		unsigned int	m_attack_damage;
};

#endif
