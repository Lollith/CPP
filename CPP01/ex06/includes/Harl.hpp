/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:59:11 by lollith           #+#    #+#             */
/*   Updated: 2022/09/13 19:20:19 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
#include <iostream>

class Harl {

	public:

		Harl( void );
		~Harl( void );

		void complain( std::string level);

	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error ( void );

};

#endif