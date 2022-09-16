/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:02 by lollith           #+#    #+#             */
/*   Updated: 2022/09/16 15:49:22 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:
		Fixed(void);
		Fixed(int const fixed);
		Fixed(float const fixed);
		Fixed(const Fixed& nbFixedAcopier);
		~Fixed(void);

		Fixed& operator=( Fixed const& rhs);

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

		static int min( int &fixed_l, int &fixed_r);
		static int min( int const &fixed_l, int const &fixed_r);
		static Fixed max( Fixed &fixed_l, Fixed &fixed_r);
		static int max( int const &fixed_l, int const &fixed_r);

	private:

		int m_fixed;
		static const int fractional_bits; // non membre=> static

};

std::ostream &	operator<<( std::ostream & o, const Fixed &rhs); //pour utiiliser ostream passe en fct non membre

#endif
