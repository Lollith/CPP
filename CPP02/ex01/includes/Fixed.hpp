/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:02 by lollith           #+#    #+#             */
/*   Updated: 2022/10/21 09:20:17 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed(void); 
		Fixed(int const fixed);
		Fixed(float const fixed);
		Fixed(const Fixed& nbFixedAcopier);
		~Fixed(void);

		Fixed& operator=(const Fixed &other);

		int 	getRawBits( void ) const; 
		void	setRawBits( int const raw );
		float 	toFloat( void ) const;
		int		toInt( void ) const;

	private:
	
		int m_fixed;
		
		static const int fractional_bits; // non membre=> static

};

std::ostream &	operator<<( std::ostream & o, const Fixed &rhs);

#endif