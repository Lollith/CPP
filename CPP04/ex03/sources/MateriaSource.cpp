/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:33:59 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 14:17:19 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource(){
	std::cout << "MateriaSource create" << std::endl; 
	for(int i = 0; i < 4; i++)
		_materia_learn[i] = NULL;
}

MateriaSource::~MateriaSource(){
	for(int i = 0; i < s_idx; i++)
		delete(_materia_learn[i]);
}

MateriaSource::MateriaSource(MateriaSource const &copy){
	std::cout << "MateriaSource copy" << std::endl; 
	*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs){
	std::cout << "MateriaSource assign" << std::endl; 
	if(this != &rhs)
	{
		for(int i = 0; i < 4 ; i++)
			this->_materia_learn[i] = rhs._materia_learn[i];
	}
	return(*this);
}


void MateriaSource::learnMateria(AMateria *for_cpy)
{
	if(s_idx > 3)
	{
		std::cout << "Memory is full, can't learn the last one"<<std::endl;
		delete for_cpy;
	}	
	else
	{
		_materia_learn[s_idx] = for_cpy;
		s_idx ++;
	}
}


AMateria *MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if(_materia_learn[i]->getType() == type) /// si ma materia que je veut creer a bien deja ete aprise
		{
			std::cout << "Create : " << std::endl;
			return (_materia_learn[i]->clone());
		}
	}
	return(NULL);
}

int MateriaSource::s_idx = 0;