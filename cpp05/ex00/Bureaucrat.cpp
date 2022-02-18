/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:18:38 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 18:59:33 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	*(const_cast<std::string*>(&this->name)) = name;
	this->grade = grade;
	if (grade < 1)
		throw(GradeTooHighException());
	if (grade > 150)
		throw(GradeTooLowException());
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "GradeTooLowException";
}

void	Bureaucrat::incrementGrade( )
{
	if (this->grade <= 1)
		throw(GradeTooHighException());
	--grade;

	return ;
}

void	Bureaucrat::decrementGrade( )
{
	if (this->grade >= 150)
		throw(GradeTooLowException());
	++grade;

	return ;
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}
int			Bureaucrat::getGrade() const
{
	return this->grade;
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", " << rhs.getGrade();
	return o;
}
