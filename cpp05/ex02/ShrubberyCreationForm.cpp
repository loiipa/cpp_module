/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:05 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 20:17:03 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "ShrubberyCreationForm", 145, 137), _target( "Default Target" )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) : Form( "ShrubberyCreationForm", 145, 137), _target( target )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form( src ), _target( src.getTarget() )
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	this->Form::operator=( rhs );
	this->_target = rhs.getTarget();
	return *this;
}

std::string		ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );

	std::ofstream	asciiTree;

	asciiTree.open( getTarget() + "_shrubbery" );
	if (asciiTree.fail())
	{
		std::cerr << "Open fail" << std::endl;
		return ;
	}
	asciiTree << "       _-_\n";
	asciiTree << "    /~~   ~~\\\n";
	asciiTree << " /~~         ~~\\\n";
	asciiTree << "{               }\n";
	asciiTree << " \\  _-     -_  /\n";
	asciiTree << "   ~  \\\\ //  ~\n";
	asciiTree << "_- -   | | _- _\n";
	asciiTree << "  _ -  | |   -_\n";
	asciiTree << "      // \\\\";
	asciiTree.close();
}
