/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:28:38 by cjang             #+#    #+#             */
/*   Updated: 2022/02/09 14:51:34 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <ostream>

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

	static Fixed &			min( Fixed & l, Fixed & r );
	static Fixed const &	min( Fixed const & l, Fixed const & r );
	static Fixed &			max( Fixed & l, Fixed & r );
	static Fixed const &	max( Fixed const & l, Fixed const & r );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & rhs );

#endif
