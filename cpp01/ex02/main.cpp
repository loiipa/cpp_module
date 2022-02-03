/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:31:20 by cjang             #+#    #+#             */
/*   Updated: 2022/01/31 12:46:51 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		str = "HI THI IS BRAIN";
	std::string*	str_ptr = &str;
	std::string&	str_ref = str;

	std::cout << "<address>" << std::endl;
	std::cout << "str     address  " << &str << std::endl;
	std::cout << "str_ptr address  " << str_ptr << std::endl;
	std::cout << "str_ref address  " << &str_ref << std::endl;

	std::cout << "<string>" << std::endl;
	std::cout << "str      " << str << std::endl;
	std::cout << "str_ptr  " << *str_ptr << std::endl;
	std::cout << "str_ref  " << str_ref << std::endl;
	return (0);
}
