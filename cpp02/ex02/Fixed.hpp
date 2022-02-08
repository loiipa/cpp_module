/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:28:38 by cjang             #+#    #+#             */
/*   Updated: 2022/02/07 01:33:20 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
private:
	
	int					_fixedPoint;
	static const int	_fractionalBits;

public:

	Fixed( void );
	Fixed( int const i );
	Fixed( float const f );
	Fixed( Fixed const & src );
	~Fixed( void );
	
	Fixed &		operator=( Fixed const & rhs );

	bool		operator>( Fixed const & rhs ) const;
	bool		operator<( Fixed const & rhs ) const;
	bool		operator>=( Fixed const & rhs ) const;
	bool		operator<=( Fixed const & rhs ) const;
	bool		operator==( Fixed const & rhs ) const;
	bool		operator!=( Fixed const & rhs ) const;
	
	Fixed		operator+( Fixed const & rhs ) const;
	Fixed		operator-( Fixed const & rhs ) const;
	Fixed		operator*( Fixed const & rhs ) const;
	Fixed		operator/( Fixed const & rhs ) const;

	Fixed &		operator++( void );
	Fixed		operator++( int );
	Fixed &		operator--( void );
	Fixed		operator--( int );

	static Fixed &	max( Fixed & l, Fixed & r);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const; 

};

std::ostream &		operator<<( std::ostream & o, Fixed const & rhs );

#endif
