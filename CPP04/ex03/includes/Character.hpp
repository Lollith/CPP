/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:10:58 by agouet            #+#    #+#             */
/*   Updated: 2022/10/31 14:47:33 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter{

	public:
	~Character();
	Character(std::string name);
//copy
//assignement

	void set_waste(AMateria *waste);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	private:
		Character();
		AMateria *_materia[4];
		std::string _name;
		AMateria *_waste; 

};




# endif
