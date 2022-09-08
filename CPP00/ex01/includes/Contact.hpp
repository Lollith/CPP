/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/08 22:11:53 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>


class Contact
{
	public:

		Contact(void);
		Contact(std::string nom);
		~Contact(void);

		void SetFirstName();
		void SetLastName();
		void SetNickName();
		void SetNumber();
		void SetDark();
		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetNickName() const;
		std::string GetNumber() const;
		std::string GetDark() const;

	private:
	
		std::string	m_first_name;
		std::string	m_last_name;
		std::string	m_nickname;
		std::string	m_number;
		std::string	m_darkest_secret;
};

#endif
