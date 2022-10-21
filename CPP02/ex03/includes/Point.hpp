/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:08:07 by agouet            #+#    #+#             */
/*   Updated: 2022/10/21 17:03:40 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
	public:
		Point();
		~Point();
		Point(Point const &copy);
		Point &operator=(Point const &rhs);

		Point( float const x, float const y );
		Fixed const getPointX( void ) const;
		Fixed const getPointY( void ) const;
bool operator==(const Point& compare) const;

	private:
		Fixed const _x;
		Fixed const _y;
	
};

#endif