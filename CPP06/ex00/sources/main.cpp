/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:55:46 by agouet            #+#    #+#             */
/*   Updated: 2022/10/12 15:13:54 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <iomanip>
#include <limits.h>
#include <math.h>  

int main (int ac, char **av)
{
	int zero = 0;
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
		std::cout << std::fixed << std::setprecision(pos_reel);
	else
	{
		pos_reel = 0;	
		std::cout << std::fixed << std::setprecision(pos_reel);
	};

	if(av[1][0] == '0' && av[1][1] && av[1][1] != '.')
		zero = 1;
	
	//identification:
	//converti
	Convert scal(av[1]);
	double d = scal;
	char c = scal;
	float f = scal;
	int i = scal;
	
	//check le bon type repasse en string et compare mon resultat avec la string de depart
	std::stringstream ssd;
	std::stringstream ssc;
	std::stringstream ssf;
	if (zero == 1)
	{
		ssd << "0" ;
		ssf << "0" ;
	}
	ssd << std::fixed << std::setprecision(pos_reel) << d;
	std::string strd = ssd.str();
	ssc << c;
	std::string strc = ssc.str();
	ssf << std::fixed << std::setprecision(pos_reel - 1) << f << "f";
	std::string strf = ssf.str();

	//   std::cout << INT_MIN << std::endl;
	 //std::cout << av[1] << std::endl;

	if (isnan(d))
	{	
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(f) << "f" <<std::endl;
		std::cout << "double: "<< static_cast<double>(d) << std::endl;
		return 0;
	}
	if (isinf(d))
	{
		std::cout << ""
	}

	if (strf == av[1])
	{
		std::cout << "char: '" << static_cast<char>('*') << "'"<<std::endl;
	 	int f_i = static_cast<int>(i);
	 	if (f_i > INT_MAX)
			std::cout << "int: overflow" << std::endl;
		else	
			std::cout << "int: " << f_i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(pos_reel - 1) << static_cast<float>(f) << "f" << std::endl;
		std::cout << "double: "<< f << std::endl;
	}
	else if (strd == av[1])
	{	
		std::cout << "char: No displayable" << std::endl;
	 	int d_i = static_cast<int>(i);
	 	if (d_i >= INT_MAX || d_i <= INT_MIN)
			std::cout << "int: overflow" << std::endl;
		else	
			std::cout << "int: " << d_i << std::endl;
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
		std::cout << "Not a scalar or overflow" << std::endl;
	
	
	return (0);
}

// float => decallage car manque de "precision" => conversion normale
//quantite de bytes reservee plus importante pour le double => impossible davoir lameme quantite pour un float => manque de precision 
