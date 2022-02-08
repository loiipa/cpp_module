/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:28:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/07 01:39:00 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : _fixedPoint( 0 ) {
	
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const i  ) : _fixedPoint( i << _fractionalBits ) {
	
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const f ) : _fixedPoint( (int)roundf(f * (1 << 8)) ){
	
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & rhs ) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
	
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	
	std::cout << "Assignation operator called" << std::endl;
	
	this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixedPoint = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return ;
}

float	Fixed::toFloat( void ) const {

	return (float)(this->_fixedPoint) / (1 << 8);
}

int		Fixed::toInt( void ) const {
	
	return this->_fixedPoint >> Fixed::_fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat();
	return o;
}

const int	Fixed::_fractionalBits = 8;
