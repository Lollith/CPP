/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:55:46 by agouet            #+#    #+#             */
/*   Updated: 2022/10/11 11:51:18 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <iomanip>

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "1 parameter!" << std::endl; 
		return (1);
	}
	//cherche le nombre de choffres apres "," et defini la pressision de mon affichage
	std::string av1_s(av[1]);
	size_t position_ = av1_s.find(".");
	size_t pos_reel = av1_s.length() - position_ - 1;
	if (position_ != std::string::npos)
		std::cout << std::fixed<<std::setprecision(pos_reel);
	else
	{
		pos_reel = 0;	
		std::cout << std::fixed<<std::setprecision(pos_reel );
	};
	//identification:
	//converti
	Convert scal(av[1]);
	double d = scal;
	char c = scal;
	float f = scal;
	//check le bon type repasse en string et compare mon resultat avec la string de depart
	std::stringstream ssd;
	std::stringstream ssc;
	std::stringstream ssf;
	ssd << std::fixed << std::setprecision(pos_reel) << d;
	std::string strd = ssd.str();
	ssc << c;
	std::string strc = ssc.str();
	ssf << std::fixed << std::setprecision(pos_reel - 1) << f << "f";
	std::string strf = ssf.str();

	 std::cout << strd << std::endl;
	 std::cout << av[1] << std::endl;


	if (strf == av[1])
	{
		std::cout << "char: '" << static_cast<char>(f) << "'"<<std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(pos_reel - 1) << static_cast<float>(f) << "f" << std::endl;
		std::cout << "double: "<< f << std::endl;
	}
	else if (strd == av[1])
	{	
		std::cout << "char: No displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		if (pos_reel == 0)
			std::cout << std::fixed << std::setprecision(pos_reel + 1);
		else
			std::cout << std::fixed << std::setprecision(pos_reel);
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: "<< d << std::endl;
	}
	else if (strc == av[1])
	{
		std::cout << "char: " << strc << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << std::endl;
		std::cout << "double: "<< static_cast<double>(c) << std::endl;
	}
	else
		std::cout << "only scalar" << std::endl;
	
	
	return (0);
}

//strcode