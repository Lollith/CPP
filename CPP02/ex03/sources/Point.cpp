/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:10 by agouet            #+#    #+#             */
/*   Updated: 2022/10/21 17:03:51 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point():
	_x(0), _y(0){
	return;
}

Point::Point( float const x, float const y ):
	_x(x), _y(y){
	return;
}

Point::Point( Point const &copy ){
	*this = copy;
}

Point &Point::operator=( Point const &rhs ){
	(void) rhs;
	return(*this);
}

Point::~Point(){ return;}

Fixed const Point::getPointX( void ) const{
		return this->_x;
}

Fixed const Point::getPointY( void ) const{
		return this->_y;
}

bool Point::operator==(const Point& compare) const
{
	if(_x.getRawBits() != compare.getPointX().getRawBits())
		return false;
	if(_y.getRawBits() != compare.getPointY().getRawBits())
		return false;
	return true;
}
