/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:18:29 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 16:20:24 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():ICharacter(){}

Character::~Character(){}

Character::Character(std::string name):ICharacter(),_name(name){
	*Character::_materia = NULL;
}

std::string const &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria *materia){
	 _materia[0] = materia;  // met a lemplacement 0 , doit  equipe au 1er emplacement vide
}//si inventaire plein => ne rien faire

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