/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:05:21 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 16:27:38 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"




int main()
{
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	
	//AMateria* tmp;
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);
	//ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	//me->use(1, *bob);
	//delete bob;
	//delete me;
	//delete src;

	// penser a delete *Waste
	return 0;
}
