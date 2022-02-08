/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:18:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/08 18:57:05 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x( 0 ), y( 0 ) {

	return ;
}

Point::Point( const float x, const float y ) : x( x ), y( y ) {

	return ;
}

Point::Point( Point const & src ) {

	*this = src;
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

Point &	Point::operator=( Point const & rhs ) {

	std::cout << "operator=" << std::endl;
	std::cout << rhs.getX().getRawBits() << std::endl;
	std::cout << rhs.getY().getRawBits() << std::endl;

	this->getX().setRawBits( rhs.getX().getRawBits() );
	this->getY().setRawBits( rhs.getY().getRawBits() );

	std::cout << this->getX().getRawBits() << std::endl;
	std::cout << this->getY().getRawBits() << std::endl;
	return *this;
}
