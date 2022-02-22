/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:05 by cjang             #+#    #+#             */
/*   Updated: 2022/02/22 14:08:36 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "robotomy request", 72, 45), _target( "Default Target" )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) : Form( "robotomy request", 72, 45), _target( target )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form( src ), _target( src.getTarget() )
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->Form::operator=( rhs );
	this->_target = rhs.getTarget();
	return *this;
}

std::string		RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );

	bool	fiftyFifty;
	std::cout << "drrrrrrrrrrrrrrr.." << std::endl;

	std::srand(std::time(NULL));
	fiftyFifty = std::rand() % 2;

	if (fiftyFifty == true)
		std::cout << "<" << this->getTarget() << "> has been robotomized successfully!" << std::endl;
	else
		std::cout << "<" << this->getTarget() << "> failed to robotomized.." << std::endl;

	return ;
}
