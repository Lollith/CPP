/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:54 by agouet            #+#    #+#             */
/*   Updated: 2022/09/22 14:30:08 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(){

	FragTrap bot2("Bot");
	bot2.attack("bear");
	bot2.takeDamage(40);
	bot2.beRepaired(10);
	bot2.highFivesGuys();
	return 0;
}
