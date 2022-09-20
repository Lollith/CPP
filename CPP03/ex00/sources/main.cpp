/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:54 by agouet            #+#    #+#             */
/*   Updated: 2022/09/20 16:12:39 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

	ClapTrap bot ("bot1");
	//indiana= indiana;
	bot.attack("bear");
	bot.takeDamage(2);
	bot.takeDamage(2);
	bot.beRepaired(3);

}
