/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:17:18 by agouet            #+#    #+#             */
/*   Updated: 2022/10/18 12:51:12 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main (){
	//empty array
	Array<int> a;
	std::cout << std::endl;

	// array de 5 elements initilaises par default Null
	Array<int> b(5);
	std::cout << std::endl;

	//empty array + affichage
	Array<int> *c = new Array<int>();
	std::cout << *c << std::endl; // utilisation operator<<
	std::cout << std::endl;

	// array taille 3
	Array<int> d (3);
	std::cout << std::endl;
	
	//operateur d assignement
	d[0] = 0;
	d[1] = 3;
	d[2] = 4;
	std::cout << d[0] << std::endl; // utilisation operator[]
	std::cout << d[1] << std::endl;
	std::cout << d[2] << std::endl;
	Array<int> e;
	e = d;
	std::cout << e[0] << std::endl;
	std::cout << e[1] << std::endl;
	std::cout << e[2] << std::endl;
	
	std::cout << std::endl;
	//copy
	Array<int>f(d);
	std::cout << f[0] << std::endl;
	std::cout << f[1] << std::endl;
	std::cout << f[2] << std::endl;

	std::cout << std::endl;
	try{
		Array<int>g(2);
		std::cout << g[3] << std::endl;
	}
	catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	
	try{
		Array<int>g(2);
		g[0] = 1;
		g[1] = 2;
		std::cout << g[1] << std::endl;
	}
	catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}

	delete c;

	std::cout << std::endl;

	Array<std::string> s(4);
	Array<std::string> empty;

	s[0] = "Hi";
	s[1] = "bye";
	s[2] = "bonjour";
	s[3] = "hello";
	std::cout <<"size: " << s.size() << std::endl;
	std::cout << "size: "<< empty.size() << std::endl;
	empty = s;
	std::cout <<"size: " << s.size() << std::endl;
	std::cout << "new size: "<< empty.size() << std::endl;
	
	Array<std::string> empty2(s);
	s [0] = "change";
	std::cout <<  s[0] << std::endl;
	std::cout <<  empty[0] << std::endl;
	std::cout <<  empty2[0] << std::endl;



	return (0);
}