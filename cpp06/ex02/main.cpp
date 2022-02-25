/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:11 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 11:39:46 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base*	abc_ptr;

	abc_ptr = generate();
	identify(abc_ptr);
	identify(*abc_ptr);

	std::cout << std::endl;
	
	A		a;

	identify(&a);
	identify(a);

	delete abc_ptr;
	return 0;
}
