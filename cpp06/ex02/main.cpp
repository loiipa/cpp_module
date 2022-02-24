/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:11 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 17:50:59 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	base1;
	Base*	base2;
	// Base*	base3;
	// Base*	base4;

	base2 = base1.generate();
	base1.identify(base2);
}
