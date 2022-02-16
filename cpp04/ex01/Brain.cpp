/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:26:01 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 11:56:39 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "<Brain default Constructor>" << std::endl;
	return ;
}

Brain::Brain( Brain const & src )
{
	std::cout << "<Brain copy Constructor>" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return ;
}

Brain::~Brain( void )
{
	std::cout << "<Brain Destructor>" << std::endl;
	return ;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "<Brain assignation operator>" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

std::string	Brain::getIdea( int const & idx ) const
{
	return this->ideas[idx];
}

void		Brain::setIdea( int const & idx, std::string const & raw )
{
	this->ideas[idx] = raw;
	return ;
}
