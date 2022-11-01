/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:10:58 by agouet            #+#    #+#             */
/*   Updated: 2022/11/01 09:02:27 by agouet           ###   ########.fr       */
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

	void set_waste(AMateria *waste);
	Character(std::string name);

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
