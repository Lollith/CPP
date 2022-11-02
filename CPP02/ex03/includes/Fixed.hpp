/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:02 by lollith           #+#    #+#             */
/*   Updated: 2022/10/21 11:33:49 by agouet           ###   ########.fr       */
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

		Fixed  &operator=( Fixed const &rhs);

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float 	toFloat( void ) const;
		int		toInt( void ) const;

		bool operator>( Fixed const& rhs) const;
		bool operator<( Fixed const& rhs) const;
		bool operator<=( Fixed const& rhs) const;
		bool operator>=( Fixed const& rhs) const;
		bool operator==( Fixed const& rhs) const;
		bool operator!=( Fixed const& rhs) const;

		Fixed operator+( Fixed const& rhs) const;
		Fixed operator-( Fixed const& rhs) const;
		Fixed operator*( Fixed const& rhs) const;
		Fixed operator/( Fixed const& rhs) const;

		Fixed &operator++();
		Fixed operator++( int );
		Fixed &operator--();
		Fixed operator--( int );

		static Fixed min( Fixed &fixed_l, Fixed &fixed_r);
		static Fixed min( Fixed const &fixed_l, Fixed const &fixed_r);
		static Fixed max( Fixed &fixed_l, Fixed &fixed_r);
		static Fixed max( Fixed const &fixed_l, Fixed const &fixed_r);

	private:

		int m_fixed;
		static const int fractional_bits; // non membre=> static

};

std::ostream &	operator<<( std::ostream & o, const Fixed &rhs); //pour utiiliser ostream passe en fct non membre

#endif
