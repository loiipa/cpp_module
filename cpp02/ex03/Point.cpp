/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:18:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/09 01:07:31 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x( 0 ), y( 0 ) {

	return ;
}

Point::Point( float const x, float const y ) : x( x ), y( y ) {

	return ;
}

Point::Point( Fixed const x, Fixed const y ) : x( x ), y( y ) {

	return ;
}

Point::Point( Point const & src ) : x( src.getX() ), y( src.getY() ){

	return ;
}

Point::~Point() {

	return ;
}

Fixed	Point::getX( void ) const {

	return this->x;
}

Fixed	Point::getY( void ) const {

	return this->y;
}

Fixed	Point::outerProduct( Point const & a, Point const & b) {

	return a.getX() * b.getY() - a.getY() * b.getX();
}
Point &	Point::operator=( Point const & rhs ) {

	(void) rhs;
	return *this;
}

Point	Point::operator-( Point const & rhs ) const {

	return Point( this->getX() - rhs.getX(), this->getY() - rhs.getY() );
}
