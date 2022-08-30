/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/08/30 17:56:48 by agouet           ###   ########.fr       */
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

	void save(std::string nom);

	private:

		std::string	m_first_name;
		//std::string	m_last_name;
		//std::string	m_nickname;
		//std::string	m_number;
		//std::string	m_darkest_secret;
};

#endif
