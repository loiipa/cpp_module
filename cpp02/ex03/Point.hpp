/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:18:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/08 18:54:43 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point {

private:

	Fixed const x;
	Fixed const y;

public:

	Point( void );
	Point( const float x, const float y );
	Point( Point const & src );
	~Point();
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	Point &		operator=( Point const & rhs );

};

#endif
