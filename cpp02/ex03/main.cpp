/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:28:43 by cjang             #+#    #+#             */
/*   Updated: 2022/02/09 00:36:27 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {

	Point	a(0, 0);
	Point	b(100, 0);
	Point	c(0, 100);
	
	Point	point1(10, 10);
	Point	point2(-1, -1);
	Point	point3(50, 0);

	std::cout << bsp(a, b, c, point1) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;
	std::cout << bsp(a, b, c, point3) << std::endl;
	
	return 0;
}
