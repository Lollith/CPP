/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:22:06 by lollith           #+#    #+#             */
/*   Updated: 2022/11/07 10:17:04 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"
#include "iostream"

// serialization: codage dune info sous la forme dune suite dinfo plus petites(atomique)⇒ sauvegarde ou transport sur le reseau
//uintptr_t =is an unsigned integer type that is capable of storing a data pointer

uintptr_t serialize( Data* ptr ){
	return( reinterpret_cast<uintptr_t>(ptr) );
}

Data* deserialize( uintptr_t raw ){
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