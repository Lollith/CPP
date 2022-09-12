/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:16:48 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 13:53:34 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon  {

	private:
		std::string m_type;

	public:

	Weapon();
	Weapon(std::string type);
	~Weapon();
	
	std::string getType(void) const;
	void setType( std::string typex);

};

#endif