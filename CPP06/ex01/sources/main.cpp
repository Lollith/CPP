/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:22:06 by lollith           #+#    #+#             */
/*   Updated: 2022/10/14 09:42:39 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"
#include "iostream"

uintptr_t serialize( Data* ptr ){
	return( reinterpret_cast<uintptr_t>(ptr) );
}

Data* deserialize( uintptr_t raw )
{
	return( reinterpret_cast<Data*>(raw) );
}

int main ()
{
	Data mon_objet;
	Data *output;
	mon_objet.i = 3;
	mon_objet.a ='a';
	mon_objet.s= "test";

	uintptr_t input;

	input = serialize(&mon_objet);
	output = deserialize(input);

	std::cout << "mon objet avant serialisation: int: " << mon_objet.i << std::endl;
	std::cout << "mon objet avant serialisation: string: " << mon_objet.s << std::endl;
	std::cout << std::endl;
	
	std::cout << "sortie apres deserialisation: int: " << output->i << std::endl;
	std::cout << "sortie apres deserialisation: string: " << output->s << std::endl;

}