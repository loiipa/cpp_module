/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:50:48 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 17:49:17 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t	serialize(Data* ptr)
{
	try
	{
		uintptr_t	uiptr = reinterpret_cast<uintptr_t>(ptr);
		return uiptr;
	}
	catch (const std::exception & e)
	{
		return 0;
	}
}

Data*		deserialize(uintptr_t raw)
{
	try
	{
		Data*	data = reinterpret_cast<Data *>(raw);
		return data;
	}
	catch (const std::exception & e)
	{
		return NULL;
	}
}
