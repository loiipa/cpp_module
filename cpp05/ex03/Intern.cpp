/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:59:09 by cjang             #+#    #+#             */
/*   Updated: 2022/02/22 14:16:24 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const & src )
{
	(void) src;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern &	Intern::operator=( Intern const & rhs )
{
	if (this == &rhs)
		return *this;
	return *this;
}

Form*		Intern::makeForm( std::string formName, std::string formTarget ) const
{
	std::string	formListName[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form*	(Intern::*formList[3])( std::string const & target )const = { &Intern::makeSForm, &Intern::makeRForm, &Intern::makePForm };

	for (int i = 0; i < 3; i++)
	{
		if (formName == formListName[i])
		{
			std::cout << "Intern creates <" << formName << ">" << std::endl;
			return (this->*formList[i])( formTarget );
		}
	}
	throw NotFoundFormException();
}

Form*		Intern::makeSForm( std::string const & target ) const
{
	return new ShrubberyCreationForm( target );
}

Form*		Intern::makeRForm( std::string const & target ) const
{
	return new RobotomyRequestForm( target );
}

Form*		Intern::makePForm( std::string const & target ) const
{
	return new PresidentialPardonForm( target );
}

const char* Intern::NotFoundFormException::what() const throw()
{
	return "I'm Sorry Sir.. Not Found Form..";
}
