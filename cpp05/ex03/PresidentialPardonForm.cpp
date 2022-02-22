/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:05 by cjang             #+#    #+#             */
/*   Updated: 2022/02/22 14:08:29 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "presidential pardon", 25, 5), _target( "Default Target" )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) : Form( "presidential pardon", 25, 5), _target( target )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form( src ), _target( src.getTarget() )
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->Form::operator=( rhs );
	this->_target = rhs.getTarget();
	return *this;
}

std::string		PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );

	std::cout << "<" << this->getTarget() << "> pardoned by Zafod Beeblebrox." << std::endl;

	return ;
}
