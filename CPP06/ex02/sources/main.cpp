/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:58:33 by agouet            #+#    #+#             */
/*   Updated: 2022/10/14 16:18:28 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <iostream>
#include <exception>


Base *generate(void){
	
	Base *base;
	char c;
	srand (static_cast<unsigned int>(time(NULL)));
	int random =(rand() % 3);  // % :value de 0 a 2
	switch(random)
	{
		case 0:
			base = new A;
			c = 'A';
			break;
		case 1:
			base = new B;
			c = 'B';
			break;
		case 2:
			base = new C;;
			c = 'C';
			break;
	}
	std::cout << "generator: "<< c << std::endl;
	return (base);
}

void identify_pointer(Base* p)
{
	char cc;
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a != NULL)
		cc = 'A';
	if (b != NULL)
		cc = 'B';
	if (c != NULL)
		cc = 'C';
	std::cout << "pointer identificator: is a "<< cc << std::endl;
}

void identify_ref(Base &p)
{
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "ref identificator: is a A" << std::endl;
	}
	catch( std::exception &bad_cast){}
	try {
		B b = dynamic_cast<B &>(p);
		std::cout << "ref identificator: is a B" << std::endl;
	}
	catch( std::exception &bad_cast){}
	try {
		C c = dynamic_cast<C &>(p);
		std::cout << "ref identificator: is a C" << std::endl;
	}
	catch( std::exception &bad_cast){}
}


int main (){

	Base *ident;
	ident = generate();
	identify_pointer(ident);
	identify_ref(*ident);
	delete (ident);
	
	return 0;
}