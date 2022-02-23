/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstreamTest.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:53:54 by cjang             #+#    #+#             */
/*   Updated: 2022/02/23 12:28:06 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int	main( void )
{
	std::stringstream	ss;
	std::string			target;

	for (int i = 0; i < 10; i++)
		ss << i << " ";

	target = ss.str();
	std::cout << target << std::endl;

	return 0;
}
