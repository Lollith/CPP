/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:58:32 by lollith           #+#    #+#             */
/*   Updated: 2022/09/26 10:29:55 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
using std::cout;
using std::endl;

Harl::Harl(void){
	return;
}

Harl::~Harl(void){
	return;
}

void Harl::complain(std::string level) // forme de set_accessor
{




	int nb_fct = 4;
	std::string funct_names[] = {"debug", "info", "warning", "error"};//crrer un tableau de fct
	void(Harl::*fct_member[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // pointeur de fontion

	for(int i = 0; i < nb_fct; i++)
	{
		if (funct_names[i] == level)
			(this->*fct_member[i])( );
	}
}

void Harl::debug( void ){
	cout << "[ DEBUG ]  -  I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << endl;
}

void Harl::info( void ){
	cout << "[ INFO ]  -  I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<< endl;
}

void Harl::warning( void ){
	cout << "[ WARNING ]  -  I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error( void ){
	cout << "[ ERROR ]  -  This is unacceptable ! I want to speak to the manager now." << endl;

}
