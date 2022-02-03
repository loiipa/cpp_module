/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:56:27 by cjang             #+#    #+#             */
/*   Updated: 2022/02/03 23:32:17 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;
	
	karen.complain("error");
	karen.complain("warning");
	karen.complain("info");
	karen.complain("debug");

	return (0);
}
