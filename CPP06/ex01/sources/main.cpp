/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:22:06 by lollith           #+#    #+#             */
/*   Updated: 2022/10/13 19:59:21 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"
#include "iostream"

uintptr_t serialize(Data* ptr){
	return( reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main ()
{
	Data mon_objet;
	Data output;
	mon_objet.i = 3;
	mon_objet.a ='a';

	uintptr_t input;

	input = serialize(&mon_objet);
	output = deserialize(input);

	std::cout << "int: " << mon_objet.i << std::endl;
	std::cout << "int: " << output.i << std::endl;

}