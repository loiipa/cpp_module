/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:01:45 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 21:02:24 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Default Bureaucrat" ), _grade( getGradeLowest() )
{
	return ;
}

Bureaucrat::Bureaucrat( std::string const & name, int const & grade ): _name( name ), _grade( grade )
{
	if (grade < getGradeHighest())
		throw GradeTooHighException();
	if (grade > getGradeLowest())
		throw GradeTooLowException();
		
	return ;
}


Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name( src.getName() ), _grade( src.getGrade() )
{
	if (src.getGrade() < getGradeHighest())
		throw GradeTooHighException();
	if (src.getGrade() > getGradeLowest())
		throw GradeTooLowException();

	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}


Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (rhs.getGrade() < getGradeHighest())
		throw GradeTooHighException();
	if (rhs.getGrade() > getGradeLowest())
		throw GradeTooLowException();

	this->_grade = rhs.getGrade();
	return *this;
}

std::string	const	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int			Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void		Bureaucrat::incrementGrade( void )
{
	if ( this->getGrade() <= getGradeHighest() )
		throw GradeTooHighException();
	--this->_grade;
	return ;
}

void		Bureaucrat::decrementGrade( void )
{
	if ( this->getGrade() >= getGradeLowest() )
		throw GradeTooLowException();
	++this->_grade;
	return ;
}

void		Bureaucrat::SignForm( Form & form ) const
{
	if (form.getSigned() == false)
	{
		try
		{
			form.beSigned( *this );
			std::cout << "<" << this->_name << "> signs <" << form.getName() << "> " << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "<" << this->_name << "> cannot sign <" << form.getName() << "> ";
			std::cout << "because grade is too low to signed." << std::endl;
		}
	}
	else
	{
		std::cout << "<" << this->_name << "> cannot sign <" << form.getName() << "> ";
		std::cout << "because this form already signed." << std::endl;
	}

	return ;
}

void		Bureaucrat::executeForm( Form const & form )
{
	try
	{
		form.execute( *this );
		std::cout << "<" << this->getName() << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (const Form::NotSignedException& e)
	{
		std::cout << "<" << this->getName() << "> can't executes <" << form.getName() << "> for this reason : "; 
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << "<" << this->getName() << "> can't executes <" << form.getName() << "> for this reason : "; 
		std::cout << e.what() << std::endl;
	}
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "[Bureaucrat] GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "[Bureaucrat] GradeTooLowException";
}

int	Bureaucrat::getGradeHighest( void )
{
	return Bureaucrat::_gradeHighest;
}

int	Bureaucrat::getGradeLowest( void )
{
	return Bureaucrat::_gradeLowest;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << "<" << rhs.getName() << "> [" << rhs.getGrade() << "]";
	return o;
}

const int	Bureaucrat::_gradeHighest = 1;
const int	Bureaucrat::_gradeLowest = 150;
