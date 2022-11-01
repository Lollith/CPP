/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:18:29 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 18:44:47 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():ICharacter(){
	std::cout << "Character create" << std::endl; 
}

Character::~Character(){
	for(int i = 0; i < _idx_inventory; i++)
	{	
		if(this->_inventory[i] != 0)
			delete(this->_inventory[i]);
	}
	delete(this->_waste);
}

Character::Character(Character const &copy){
	std::cout << " construct Character cpy" << std::endl; 
	*this = copy;
}

Character &Character::operator=(Character const &rhs){
	std::cout << "Character assign" << std::endl; 
	if(this != &rhs)
	{
		this->_name = rhs._name;
		for(int i = 0; i < _idx_inventory; i++)
			delete(_inventory[i]);
		this->_idx_inventory = rhs._idx_inventory;
		for(int i = 0; i < _idx_inventory; i++)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}	
	return (*this);
}

Character::Character(std::string name): ICharacter(),_name(name), _waste(NULL){
	_idx_inventory = 0; // initialisation pour nouveau personnage
	std::cout << "Personnage " <<  this->getName() <<std::endl;
	for (int i = 0; i < 4; i++)
		Character::_inventory[i] = NULL;
}

std::string const &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria *materia){
	if (this->_idx_inventory > 3)
	{		
		std::cout << "Inventory is full" << std::endl;
		 delete ( materia);
	}
	else	
	{
		_inventory[_idx_inventory] = materia;
		std::cout<< " is equiped" << std::endl;
		this->_idx_inventory ++;
	}
}

void Character::unequip( int idx ){
	set_waste( _inventory[idx] );
	// if(_inventory[idx])
	{
		for (int i = idx +1 ; i < _idx_inventory; i++)
			_inventory[i-1] = _inventory[i];
	}	 
	_inventory[_idx_inventory - 1] = NULL;
	_idx_inventory--;
	std::cout << getName() <<" unequip " << _waste->getType()<<"block" << std::endl;
}

void Character::use(int idx, ICharacter &target){
	if(_inventory[idx] != NULL)
			_inventory[idx]->use(target);
	else
		std::cout << "Can't do this" << std::endl;
}

void Character::set_waste(AMateria *waste){
	this->_waste = waste; //creation dun pointeur  qui recup ma materia unequip, pour la delete // detruite avec le destructeur char
}
 