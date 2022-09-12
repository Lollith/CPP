/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:39:09 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 14:15:16 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
	
	std::string m_name;
	Weapon *m_weapon;

	public:
	HumanB(std::string name);
	~HumanB();
	
	void attack();
	void setWeapon( Weapon &club1 );
};

#endif