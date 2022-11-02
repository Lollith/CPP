/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:02 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 17:06:33 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap{

	public:

		ClapTrap(ClapTrap const &copy);
		ClapTrap &operator=( ClapTrap const &rhs);
		virtual ~ClapTrap(void);

		ClapTrap( std::string name );

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


	protected:
		
		ClapTrap(void);

		std::string		m_name;
		unsigned int 	m_hit_points;
		unsigned int	m_energy_points;
		unsigned int	m_attack_damage;
};

#endif
