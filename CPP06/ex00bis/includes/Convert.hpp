/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:01:03 by agouet            #+#    #+#             */
/*   Updated: 2022/11/07 09:53:42 by lollith          ###   ########.fr       */
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
		~Convert( void );
		Convert ( Convert const &copy );
		Convert &operator=( Convert const &rhs );

	//surcharge
		Convert( std::string const scalaire);
		

	//type cast operator
		operator double( void );
		operator char( void );
		operator float( void );
		operator int( void );
	
	//accessor
		size_t getPrecision( void ) const;
		
	//autres
		void to_convert();
		void define_precision();

	private:
		std::string const _scalaire;
		double _d;
		char _c;
		float _f;
		int _i;
		size_t precision;
		
		Convert( void );
};


#endif