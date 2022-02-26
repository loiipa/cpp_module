/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:11 by cjang             #+#    #+#             */
/*   Updated: 2022/02/26 18:27:38 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base*	abc_ptr;

	abc_ptr = generate();
	identify(abc_ptr);
	identify(*abc_ptr);

	A*		a_ptr = new A();
	identify(a_ptr);
	delete abc_ptr;
	delete a_ptr;
	return 0;
}
