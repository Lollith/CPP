/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:02:32 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 17:21:09 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream> // Stream class to read and write from files
using std::cout;
using std::endl;



int main (int ac, char const *av[])
{
	(void) av;
	std::ifstream fdin;
	std::ofstream fdout; // crrer mon flux out

	
	if (ac != 4)
	{
		cout <<"3 parameters: file , s1, s2" << endl;
		return(1);

	}
	std::string rep =".replace.txt"; // "" +> string
	std::string av_s(av[1]);// char* av[1]+ a p[asser en string]

	 std::string const file = av_s + rep; // les operateurs marche sur les string// pas sur les char *

	char const *file2 = file.c_str();// la fct c_str reconverti en char * car open marche en char* , c_str utile juste en c++98
	
	fdout.open(file2, std::ios::out);
	return (0);
}