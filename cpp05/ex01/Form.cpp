/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:51:34 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 19:07:51 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void )
	: _name( "Default Form" ), _signed( false ), _gradeSign( getGradeLowest() ), _gradeExecute( getGradeLowest() )
{
	return ;
}
Form::Form( std::string const & name, int const & gradeSign, int const & gradeExecute )
	: _name( name ), _signed( false ), _gradeSign( gradeSign ), _gradeExecute( gradeExecute )
{
	if (gradeSign < getGradeHighest() || gradeExecute < getGradeHighest())
		throw GradeTooHighException();
	if (gradeSign > getGradeLowest() || gradeExecute > getGradeLowest())
		throw GradeTooLowException();
		
	return ;
}

Form::Form( Form const & src )
	: _name( src.getName() ), _signed( src.getSigned() ), _gradeSign( src.getGradeSign() ), _gradeExecute( src.getGradeExecute() )
{
	if (src.getGradeSign() < getGradeHighest() && src.getGradeExecute() < getGradeHighest())
		throw GradeTooHighException();
	if (src.getGradeSign() > getGradeLowest() && src.getGradeExecute() > getGradeLowest())
		throw GradeTooLowException();
		
	return ;
}

Form::~Form( void )
{
	return ;
}

Form &	Form::operator=( Form const & rhs )
{
	if (rhs.getGradeSign() < getGradeHighest() && rhs.getGradeExecute() < getGradeHighest())
		throw GradeTooHighException();
	if (rhs.getGradeSign() > getGradeLowest() && rhs.getGradeExecute() > getGradeLowest())
		throw GradeTooLowException();

	this->_signed = rhs.getSigned();
	return *this;
}

std::string	Form::getName( void ) const
{
	return this->_name;
}

bool		Form::getSigned( void ) const
{
	return this->_signed;
}

int			Form::getGradeSign( void ) const
{
	return this->_gradeSign;
}

int			Form::getGradeExecute( void ) const
{
	return this->_gradeExecute;
}

void	Form::beSigned( Bureaucrat const & bureaucrat )
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	this->_signed = true;

	return ;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "[Form] GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "[Form] GradeTooLowException";
}

int	Form::getGradeHighest( void )
{
	return Form::_gradeHighest;
}

int	Form::getGradeLowest( void )
{
	return Form::_gradeLowest;
}

std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	o << "Name\t\t" << rhs.getName() << "\n";
	o << "Signed\t\t" << rhs.getSigned() << "\n";
	o << "GradeSign\t" << rhs.getGradeSign() << "\n";
	o << "GradeExecute\t" << rhs.getGradeExecute();
	
	return o;
}

const int	Form::_gradeHighest = 1;
const int	Form::_gradeLowest = 150;
