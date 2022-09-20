/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:52:54 by agouet            #+#    #+#             */
/*   Updated: 2022/09/20 17:12:47 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap : public ClapTrap{

	public:
	ScavTrap(void);
	~ScavTrap(void);

	ScavTrap(std::string name);

};

#endif
