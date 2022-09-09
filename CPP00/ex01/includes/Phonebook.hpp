/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/09 11:09:25 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class Phonebook {

	public:

		Phonebook(void);
		~Phonebook(void);
		
		int enter_cmd(void); // public

	private:

		std::string	buff;
		std::string input;
		int index_user;
		int index;
		Contact m_contacts[8];
		bool check_digit(std::string s)const;
		bool add(void);
		bool display(void)const;
		bool search(void);// non const car vien chercher input
		void display_table(void);
};

#endif
