/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:01:03 by agouet            #+#    #+#             */
/*   Updated: 2022/10/10 15:46:00 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>
# include <sstream>
# include <cstdlib>
# include <iostream>

class Convert{
	public:
 	//canonic
		Convert( void );
		~Convert( void );
		Convert ( Convert const &copy );
		Convert &operator=( Convert const &rhs );

	//surcharge
		Convert( std::string const scalaire);

	//cast operator
		operator double( void );
		operator char( void );
		operator float( void );

	private:
		std::string const _scalaire;
		double _d;
		const char *_c;
		float _f;

};


#endif