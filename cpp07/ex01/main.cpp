/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:31:56 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 21:18:20 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	int			len = 5;
	int			iii[] = {1, 3, 5, 7, 9};
	std::string	sss[] = {"hi", "my", "name", "is", "cjang"};
	float		fff[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};


	::iter(iii, len, printValue);
	std::cout << std::endl;

	::iter(sss, len, printValue);
	std::cout << std::endl;
	
	::iter(fff, len, printValue);
}
