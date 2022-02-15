/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:26:01 by cjang             #+#    #+#             */
/*   Updated: 2022/02/15 16:13:32 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	return ;
}

Brain::Brain( Brain const & src )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return ;
}

Brain::~Brain( void )
{
	return ;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Brain::setBrain( Brain & l, Brain const & r )
{
	for (int i = 0; i < 100; i++)
		l.ideas[i] = r.ideas[i];
	return ;
}
