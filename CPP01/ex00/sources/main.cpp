/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:18:35 by lollith           #+#    #+#             */
/*   Updated: 2022/09/09 11:38:57 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie nameI;

	nameI.m_name = "foo"; // utilisation var et methode ici => ne pas les mettre en privee
	nameI.announce();

	return (0);
}