/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nulltest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:24:46 by cjang             #+#    #+#             */
/*   Updated: 2022/02/27 16:33:43 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	checkref(int & i)
{
	if (&i == NULL)
	{
		std::cout << "NULL" << std::endl;
		return;
	}
	std::cout << i << std::endl;
}

int main (void)
{
	int *a = NULL;
	int& c = *a;

	checkref(c);
	return 0;
}
