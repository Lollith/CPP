/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:29:57 by lollith           #+#    #+#             */
/*   Updated: 2022/10/19 15:40:11 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

void display(int i)
{
	std::cout << i << std::endl;
}

int main ()
{
	std::vector<int> vect (4);
	vect[0] = 1;
	vect[1] = 7;
	vect[2] = 3;
	vect[3] = 42;

	try{
	std::vector<int>::iterator it_vect = easyfind(vect, 2);
		std::cout << "Vector starting at 2:" << std::endl;
	for_each(it_vect, vect.end(), display);
	}
	catch (std::string const &msg){
		std::cerr << "Exception: "<<msg << std::endl;
	}
	
	std::cout << std::endl;

	try{
	std::vector<int>::iterator it_vect = easyfind(vect, 3);
		std::cout << "Vector starting at 3:" << std::endl;
	for_each(it_vect, vect.end(), display);
	}
	catch (std::string const &msg){
		std::cerr << "Exception: "<< msg << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(23);
	lst.push_back(2);
	lst.push_back(100);
	try{
		std::list<int>::iterator it_list = easyfind(lst, 23);
		std::cout << "List starting at 23:" << std::endl;
	for_each(it_list, lst.end(), display);
	}
	catch (std::string const &msg){
		std::cerr << "Exception: "<< msg << std::endl;
	}

	return 0;	
}