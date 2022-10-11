/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:34:44 by lollith           #+#    #+#             */
/*   Updated: 2022/10/11 16:28:53 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	
	private:

	std::string m_name;//
	Weapon &m_weapon; // declaration reference

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	
	void attack();
};

#endif