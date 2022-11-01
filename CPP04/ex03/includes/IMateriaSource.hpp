/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:28:56 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 09:55:43 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"


class IMateriaSource{
	public:
		virtual ~IMateriaSource(){}
		virtual void learnMateria(AMateria*)= 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif