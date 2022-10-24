/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:27:17 by lollith           #+#    #+#             */
/*   Updated: 2022/10/24 12:00:21 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

	public:
		
		FragTrap( void );
		FragTrap( FragTrap const &copy );
		FragTrap &operator=( FragTrap const &rhs );
		~FragTrap( void );


		FragTrap(std::string name);
		void attack(const std::string &target);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);
	
	private:


};

#endif