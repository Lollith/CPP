/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:05:21 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 18:43:52 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"





int main()
{
	
	ICharacter* me = new Character("me");
	IMateriaSource* src = new MateriaSource();
	
	std::cout << std::endl;
	
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << std::endl;
	
	AMateria* tmp = NULL;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	 me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << std::endl;
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	
	 std::cout << std::endl;
	
	me->unequip(1);
	me->use(0, *bob);
	
	std::cout << std::endl;

	delete src;
	delete bob;
	
	std::cout << std::endl;
	
	Character bobby("bobby");
	bobby.equip(new Ice());
	Character bill = Character ("bobby");
	bill.equip(new Cure());	
	bill.use(0, bobby);
	
	delete me;
	

	// delete tmp; // besoin de delete tmp si ma materia est cree mais pas equipee

	
	return 0;
}
