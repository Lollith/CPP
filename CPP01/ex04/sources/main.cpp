/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:02:32 by lollith           #+#    #+#             */
/*   Updated: 2022/09/13 16:07:30 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream> // Stream class to read and write from files
using std::cout;
using std::endl;

int ft_close(std::ofstream& fdout, std::ifstream& fdin)
{
	fdout.close();
	fdin.close();
	return (0);
}

void create_file(char const *av1, std::ofstream& fdout)//ref a fdout
{
	std::string av_s(av1);// char* av[1] devient string]
	
	std::string rep =".replace.txt"; // "" +> string
	std::string const file = av_s + rep; // les operateurs marche sur les string// pas sur les char *
	char const *file2 = file.c_str();// la fct c_str reconverti en char * car open marche en char* , c_str utile juste en c++98
	fdout.open(file2, std::ios::out | std::ios::trunc);
}

int	error_open()
{
	cout << "Error opening file" << endl;
	return (1);
}

void ft_replace(const char *av[], std::string& texte, size_t& found)
{
	std::string const av_s2(av[2]);
	std::string const av_s3(av[3]);

	texte.erase(found, av_s2.length());
	if (av_s3.size() != 0)
		texte.insert(found ,av_s3);
	else
		texte.erase(found, av_s2.length()); // choix d ecraser de la taille du nouveau mot
}

int  char_len(const char *av) // preferer tansformer en string plutot que maniper des char
{
	int i = 0;

	while (av[i] != '\0')
		i++;
	return(i);
}

void ft_find(const char *av[], std::ifstream& fdin, std::ofstream& fdout)
{
	std::string texte;
	size_t found = 0; // find retrun npos si rien trouver//npos =valeur la plus grande pour size_t=> until the end of the string
	
	getline(fdin, texte);
	if (texte.length() == 0) // si texte vide
	{
		if (char_len(av[3]) != 0)
			fdout << av[3] << endl;
		//if (!char_len(av[2]) && !char_len(av[3]))
		fdout << endl;
	}
	do
	{
		found = 0;
		while (found != std::string::npos && char_len(av[2]))
		{	
			found = texte.find(av[2]); // find retrun npos si rien trouver//npos =valeur la plus grande pour size_t=> until the end of the string
			if (found != std::string::npos)	//taille found differente de la  taille de la ligne complete
				 ft_replace(av, texte, found);
		}
		fdout << texte << endl;//remet ma string ds mon fichier copier
	} while(getline(fdin, texte));
		
}



int main (int ac, const char *av[])
{
	std::ofstream fdout; // crrer mon flux out
	std::ifstream fdin;
	if (ac != 4)
	{
		cout <<"3 parameters: file, s1, s2" << endl;
		return(1);
	}
	fdin.open(av[1],std::ios::in); //ouvre mon fichier initial et copie mon texte ds une string
	if(!fdin.is_open()) // ifstream::is_open()check louverture du fichier
		return (error_open());
	create_file(av[1], fdout);
	if(!fdout.is_open()) // ifstream::is_open()check louverture du fichier
		return (error_open());
	ft_find(av, fdin, fdout); // ref pas besoin de &
	ft_close(fdout, fdin);
	return (0);
}