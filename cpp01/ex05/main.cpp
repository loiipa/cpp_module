/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:56:27 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 13:09:34 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("INFO");
	karen.complain("DEBUG");

	return (0);
}
