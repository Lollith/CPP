/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:54 by agouet            #+#    #+#             */
/*   Updated: 2022/10/24 11:04:23 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

	ClapTrap bot ("bot1");
	bot.attack("bear");
	bot.takeDamage(2);
	bot.takeDamage(2);
	bot.beRepaired(3);
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.attack("bear");
	bot.takeDamage(2);
	bot.takeDamage(2);
	bot.takeDamage(2);
	bot.takeDamage(2);
	bot.takeDamage(2);

}
