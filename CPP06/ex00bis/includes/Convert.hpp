/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:01:03 by agouet            #+#    #+#             */
/*   Updated: 2022/10/12 16:22:40 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>
# include <sstream>
# include <cstdlib>
# include <iostream>
# include <limits>
# include <math.h>  

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
		operator int( void );
		
	//autres
	double to_convert();

	private:
		std::string const _scalaire;
		double _d;
		char _c;
		float _f;
		int _i;
};


#endif