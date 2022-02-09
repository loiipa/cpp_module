/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:18:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/09 14:51:42 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {

private:

	Fixed const x;
	Fixed const y;

public:

	Point( void );
	Point( float const x, float const y );
	Point( Fixed const x, Fixed const y );
	Point( Point const & src );
	~Point();

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

	static Fixed	outerProduct( Point const & a, Point const & b );

	Point &		operator=( Point const & rhs );
	Point		operator-( Point const & rhs ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
