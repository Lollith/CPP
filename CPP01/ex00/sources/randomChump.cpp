/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:29:03 by lollith           #+#    #+#             */
/*   Updated: 2022/09/09 19:07:48 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump (std::string name)
{
	Zombie Zom;

	Zom.setName(name);
	Zom.announce(); // ici et non ds main pour que fonctionne
}
//=> ne peut pas etre utilise en dehors du scope