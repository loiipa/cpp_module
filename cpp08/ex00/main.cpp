/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:11:33 by cjang             #+#    #+#             */
/*   Updated: 2022/02/27 18:56:00 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int>	v;

	for (size_t i = 0; i < 5; i++)
		v.push_back(i);
	std::vector<int>::iterator	v_begin = v.begin();

	v_begin++;
	std::cout << *v_begin << std::endl;

	//easyfind(t, i);
	// T라는 컨테이너 안에 int값을 찾아서 리턴해라 -> 값으로 리턴? 리턴의 형태는?
	// t::interator; 반복자


}
