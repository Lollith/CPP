/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:33:59 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 09:26:09 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(MateriaSource const &copy){
	*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs){
	if(this != &rhs)
	{
		for(int i = 0; i < 4 ; i++)
		{
			this->_materia[i] = rhs._materia[i];
		}
	}
	return(*this);
}


void MateriaSource::learnMateria(AMateria *for_cpy)
{
	int i = 0;
	while(_materia[i] != NULL && i < 4)
		i++;
	if(i == 5)
		std::cout << "Learn is full" << std::endl;
	else
		_materia[i] = for_cpy;
}


AMateria *MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
	if(_materia[i]->getType() ==  type)
	}
	return(newmateria);
}