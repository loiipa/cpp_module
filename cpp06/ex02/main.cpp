/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:11 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 06:25:07 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	base;
	Base*	abc_ptr;

	abc_ptr = base.generate();
	base.identify(abc_ptr);
	base.identify(*abc_ptr);

	std::cout << std::endl;
	
	A		a;

	base.identify(&a);
	base.identify(a);

	delete abc_ptr;
	return 0;
}
