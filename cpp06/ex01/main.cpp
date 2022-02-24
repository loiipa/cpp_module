/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:47:57 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 17:37:30 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"
#include <iostream>

int	main(void)
{
	Data		*data = new Data();
	Data		*data_tmp;
	uintptr_t	raw;

	if (data != NULL)
		data->i = 42;	

	raw = serialize(data);
	std::cout << data << std::endl;
	std::cout << raw << std::endl;

	std::cout << std::endl;

	data_tmp = deserialize(raw);
	std::cout << data_tmp << std::endl;
	std::cout << raw << std::endl;

	if (data_tmp != NULL)
		std::cout << data_tmp->i << std::endl;

	delete data;
	return 0;
}
