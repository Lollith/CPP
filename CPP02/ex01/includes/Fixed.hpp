/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:02 by lollith           #+#    #+#             */
/*   Updated: 2022/09/14 20:49:10 by lollith          ###   ########.fr       */
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

		Fixed& operator=(const Fixed &other);

		int 	getRawBits( void ) const; 
		void	setRawBits( int const raw );
		float 	toFloat( void ) const;
		int		toInt( void ) const;

	private:
	
		int m_fixed;
		static const int m_bits = 8;

};

//&operator<<(const Fixed &other);

#endif