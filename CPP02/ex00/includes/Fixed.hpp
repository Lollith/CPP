/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:02 by lollith           #+#    #+#             */
/*   Updated: 2022/09/15 17:07:38 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:
		Fixed(void); 
		Fixed(const Fixed& nbFixedAcopier);
		Fixed& operator=(const Fixed &other);
		~Fixed(void);

		int getRawBits( void ) const; 
		void setRawBits ( int const raw );


	private:
	
		int m_fixed;
		static const int _bits;

};

#endif