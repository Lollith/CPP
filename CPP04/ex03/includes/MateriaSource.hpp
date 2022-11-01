/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:34:22 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 09:04:34 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource &operator=(MateriaSource const &rhs);


		virtual void learnMateria(AMateria *);
		virtual AMateria* createMateria(std::string const &type);

	private:
		AMateria *_materia[4];	
};

#endif