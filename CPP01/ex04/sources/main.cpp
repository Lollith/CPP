/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:02:32 by lollith           #+#    #+#             */
/*   Updated: 2022/09/12 21:37:56 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream> // Stream class to read and write from files
using std::cout;
using std::endl;

	

int main (int ac, char const *av[])
{
	std::ifstream fdin;
	std::ofstream fdout; // crrer mon flux out
	
	if (ac != 4)
	{
		cout <<"3 parameters: file, s1, s2" << endl;
		return(1);
	}
	//ouvre mon fichier initial et copie mon texte ds une string
	fdin.open(av[1],std::ios::in);
	std::string texte;
	getline(fdin, texte);

	// ds ma string texte, rechercher ma s1
	std::string const av_s2(av[2]);
	std::string const av_s3(av[3]);
	size_t found = texte.find(av[2]);
	if (found == std::string::npos)
		cout << " no find " << av[2] << endl;
	else
	{	
		texte.erase(found, av_s3.length());
		texte.insert(found ,av_s3);
	}
	
	
	// creation du fichier replace
	std::string rep =".replace.txt"; // "" +> string
	std::string av_s(av[1]);// char* av[1]+ a p[asser en string]
	std::string const file = av_s + rep; // les operateurs marche sur les string// pas sur les char *
	char const *file2 = file.c_str();// la fct c_str reconverti en char * car open marche en char* , c_str utile juste en c++98
	fdout.open(file2, std::ios::out);

	//remet ma string ds mon fichier copier
	fdout << texte;
	fdout.close();
	fdin.close();
	return (0);
}