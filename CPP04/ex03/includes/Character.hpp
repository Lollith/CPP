/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:10:58 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 15:39:36 by agouet           ###   ########.fr       */
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
	Character(Character const &copy);
	Character &operator=(Character const &rhs);

	Character(std::string name);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	void set_waste(AMateria *waste);

	private:
		Character();
		AMateria *_inventory[4];
		std::string _name;
		AMateria *_waste;
		int _idx_inventory; 

};




# endif
