/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:34:44 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 13:43:33 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	
	private:

	std::string m_name;// attention importance de lordre des attributs, ici name et ensuite le weapon , cf constructeur
	Weapon& m_weapon; // declaration reference

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	
	void attack();
};

#endif