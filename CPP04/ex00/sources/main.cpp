/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:20:21 by lollith           #+#    #+#             */
/*   Updated: 2022/09/23 15:40:19 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
		const Animal* meta = new Animal(); // animal est instanciee => ne peut pas creer de methode pure
		const Animal* i = new Dog();
		const Animal* j = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		 meta->makeSound();
		delete(meta);
		delete(i);
		delete(j);	
	
		std::cout << "---------------------------"<< std::endl;
		std::cout << "My test"<< std::endl;
		const WrongAnimal* k = new WrongCat();
		std::cout << k->getType() << " " << std::endl;
		k->makeSound();
		delete(k);
		return 0;
}