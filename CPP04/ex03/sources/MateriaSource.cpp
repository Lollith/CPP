/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:33:59 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 17:56:08 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}



void MateriaSource::learnMateria(AMateria *cpy)
{
	int idx = 0; //a definir
	_materia[idx] = cpy;
}


AMateria *MateriaSource::createMateria(std::string const & type){
	// AMateria *newmateria = new AMateria;
}