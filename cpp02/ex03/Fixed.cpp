/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:28:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/09 14:33:44 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : _fixedPoint( 0 ) {

	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const i ) : _fixedPoint( i << _fractionalBits ) {

	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const f ) : _fixedPoint( (int)roundf(f * (1 << _fractionalBits)) ){

	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & rhs ) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = rhs;

	return ;
}

Fixed::~Fixed( void ) {

	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	// std::cout << "Assignation operator called" << std::endl;

	this->_fixedPoint = rhs.getRawBits();
	return *this;
}

/*
** comparison operators
*/
bool		Fixed::operator>( Fixed const & rhs ) const {

	return this->getRawBits() > rhs.getRawBits();
}

bool		Fixed::operator<( Fixed const & rhs ) const {

	return this->getRawBits() < rhs.getRawBits();
}

bool		Fixed::operator>=( Fixed const & rhs ) const {

	return this->getRawBits() >= rhs.getRawBits();
}

bool		Fixed::operator<=( Fixed const & rhs ) const {

	return this->getRawBits() <= rhs.getRawBits();
}

bool		Fixed::operator==( Fixed const & rhs ) const {

	return this->getRawBits() == rhs.getRawBits();
}

bool		Fixed::operator!=( Fixed const & rhs ) const {

	return this->getRawBits() != rhs.getRawBits();
}

/*
** arithmetic operators
*/
Fixed	Fixed::operator+( Fixed const & rhs ) const {

	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( Fixed const & rhs ) const {

	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {

	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {

	if (rhs.getRawBits() == 0)
	{
		std::cerr << "Can't divide zero." << std::endl;
		exit(1);
	}
	return Fixed( this->toFloat() / rhs.toFloat() );
}

/*
** increment or decrement operators
*/
Fixed &		Fixed::operator++( void ) {

	this->_fixedPoint++;
	return *this;
}

Fixed		Fixed::operator++( int ) {

	Fixed	tmp = *this;
	++this->_fixedPoint;
	return tmp;
}

Fixed &		Fixed::operator--( void ) {

	this->_fixedPoint--;
	return *this;
}

Fixed		Fixed::operator--( int ) {

	Fixed	tmp = *this;
	--this->_fixedPoint;
	return tmp;
}

/*
** min max
*/
Fixed &			Fixed::min( Fixed & l, Fixed & r ) {

	if (l.getRawBits() <= r.getRawBits())
		return l;
	else
		return r;
}

Fixed const &	Fixed::min( Fixed const & l, Fixed const & r ) {

	if (l.getRawBits() <= r.getRawBits())
		return l;
	else
		return r;
}

Fixed &			Fixed::max( Fixed & l, Fixed & r ) {

	if (l.getRawBits() >= r.getRawBits())
		return l;
	else
		return r;
}

Fixed const &	Fixed::max( Fixed const & l, Fixed const & r ) {

	if (l.getRawBits() >= r.getRawBits())
		return l;
	else
		return r;
}

int		Fixed::getRawBits( void ) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixedPoint = raw;
	// std::cout << "setRawBits member function called" << std::endl;
	return ;
}

float	Fixed::toFloat( void ) const {

	return (float)(this->_fixedPoint) / (1 << Fixed::_fractionalBits);
}

int		Fixed::toInt( void ) const {

	return this->_fixedPoint >> Fixed::_fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat();
	return o;
}

const int	Fixed::_fractionalBits = 8;
