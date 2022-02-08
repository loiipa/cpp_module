/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:00:28 by cjang             #+#    #+#             */
/*   Updated: 2022/02/09 01:08:24 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abXap = Point::outerProduct(a-b, a-point);
	Fixed	bcXbp = Point::outerProduct(b-c, b-point);
	Fixed	caXcp = Point::outerProduct(c-a, c-point);

	// std::cout << "abXap : " << abXap << std::endl;
	// std::cout << "bcXbp : " << bcXbp << std::endl;
	// std::cout << "caXcp : " << caXcp << std::endl;
	
	if ( (abXap > 0 && bcXbp > 0 && caXcp > 0) || (abXap < 0 && bcXbp < 0 && caXcp < 0) )
		return true;
	else
		return false;
}
