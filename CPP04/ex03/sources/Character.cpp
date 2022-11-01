/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:18:29 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 09:02:29 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():ICharacter(){}

Character::~Character(){
	delete[]_materia;
}

Character::Character(Character const &copy){
	*this = copy;
}

Character &Character::operator=(Character const &rhs){
	if(this != &rhs)
	{
		this->_name = rhs._name;
		this->_waste = rhs._waste;
		for(int i = 0; i < 4; i++)
			this->_materia[i] = rhs._materia[i]->clone();
	}	
	return (*this);
}

Character::Character(std::string name): ICharacter(),_name(name){
	*Character::_materia = NULL;
}

std::string const &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria *materia){
		int i = 0;
		while (_materia[i] != NULL && i < 4)
			i++;
		if (i == 5)
			std::cout << "Inventory is full" << std::endl;
		else	
	 		_materia[i] = materia;  
	}
}

void Character::unequip(int idx){
	set_waste( _materia[idx]);
	_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
	_materia[idx]->use(target);
	
}

void Character::set_waste(AMateria *waste){
	this->_waste = waste;
}