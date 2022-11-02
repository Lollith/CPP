/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:20:21 by lollith           #+#    #+#             */
/*   Updated: 2022/10/31 08:36:51 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
		const Animal* meta = new Animal(); // animal est instanciee => ne peut pas creer de methode pure
		const Animal* dog = new Dog();// sije ne met pas virtual , compilateur va rester sur le type Animal, avec virtual, compilateur  va voir que c un Dog et non un Animal => utilisera la fct de dog
		const Animal* cat = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		dog->makeSound();
		cat->makeSound();
		 meta->makeSound();
		delete(meta);
		delete(cat);
		delete(dog);	
	
		std::cout << "---------------------------"<< std::endl;
		std::cout << "My test"<< std::endl;
		const WrongAnimal* wrong = new WrongCat();
		std::cout << wrong->getType() << " " << std::endl;
		wrong->makeSound();
		delete(wrong);
		return 0;
}