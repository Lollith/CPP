/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:21:30 by lollith           #+#    #+#             */
/*   Updated: 2022/09/13 19:20:23 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main ()
{
	Harl level;
	
	level.complain("info");
	level.complain("debug");
	level.complain("warning");
	level.complain("error");
}