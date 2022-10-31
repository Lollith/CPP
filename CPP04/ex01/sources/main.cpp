/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:20:21 by lollith           #+#    #+#             */
/*   Updated: 2022/10/31 10:01:54 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		delete(cat);
		delete(dog);

std::cout << "----------------------------------------"<< std::endl;
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i< 10; i++)
		animals[i] =  new Cat();


	for (int i = 0; i < 10; i++)
		std::cout << animals[i]->getType() << " ";
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

std::cout << "----------------------------------------"<< std::endl;

	Cat cat2;
	Cat cat3 = cat2;
	std::cout << cat2.getType() << std::endl;
	std::cout << cat3.getType() << std::endl;


	return 0;
}
