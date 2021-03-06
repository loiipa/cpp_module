/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:28:43 by cjang             #+#    #+#             */
/*   Updated: 2022/02/08 17:14:06 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed const x( 0.5f );
	Fixed const y( 10 );

	std::cout << "x , y    " << x << " , " << y << std::endl;
	std::cout << "x + y    " << x + y << std::endl;
	std::cout << "x - y    " << x - y << std::endl;
	std::cout << "x * y    " << x * y << std::endl;
	std::cout << "x / y    " << x / y << std::endl;
	return 0;
}
