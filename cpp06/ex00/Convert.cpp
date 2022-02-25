/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:09:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 22:59:57 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) : _sVal( "" ), _dVal( 0 ), _validCheck( false )
{
	return ;
}

Convert::Convert( std::string const & str ) : _sVal( str ), _dVal( 0 ), _validCheck( false )
{
	size_t		idx;
	try
	{
		this->_dVal = std::stod( str, &idx );
		// std::cout << idx << "\t" << str.length() << std::endl;
		
		if (str.length() == idx)
			this->_validCheck = true;
		else if (str.length() == idx + 1 && str[idx] == 'f')
		{
			if (str.find("inf") == 0 || str.find("inf") == 1 || str.find("nan") == 0 || str.find("nan") == 1)
				this->_validCheck = true;
			else if (static_cast<int>(str.find('.')) != -1)
				this->_validCheck = true;
		}
		else
			throw (std::exception());
	}
	catch (std::exception & e)
	{
		// std::cout << e.what() << std::endl;
		if (str.length() == 1)
		{
			this->_dVal = static_cast<double>(str[0]);
			this->_validCheck = true;
		}
	}
	return ;
}

Convert::Convert( Convert const & src )
: _sVal( src.getSVal() ), _dVal( src.getDVal() ), _validCheck( getValidCheck() )
{
	return ;
}

Convert::~Convert( void )
{
	return ;
}

Convert &	Convert::operator=( Convert const & rhs )
{
	this->_sVal = rhs.getSVal();
	this->_dVal = rhs.getDVal();
	this->_validCheck = rhs.getValidCheck();
	
	return *this;
}

std::string	Convert::getSVal( void ) const
{
	return this->_sVal;
}

double	Convert::getDVal( void ) const
{
	return this->_dVal;
}

bool	Convert::getValidCheck( void ) const
{
	return this->_validCheck;
}

void	Convert::printAll( void ) const
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();

	return ;
}

char	Convert::toChar( void ) const
{
	return static_cast<char>(this->_dVal);
}

int		Convert::toInt( void ) const
{
	return static_cast<int>(this->_dVal);
}

float	Convert::toFloat( void ) const
{
	return static_cast<float>(this->_dVal);
}

void	Convert::printChar( void ) const
{
	char	c = this->toChar();
	char	cMin = std::numeric_limits<char>::min();
	char	cMax = std::numeric_limits<char>::max();

	std::cout << "char\t";
	
	if (this->getValidCheck() == false || this->getDVal() < cMin || this->getDVal() > cMax || isnan(this->getDVal()))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	
	if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	return ;
}

void	Convert::printInt( void ) const
{
	int		i = this->toInt();
	int		iMin = std::numeric_limits<int>::min();
	int		iMax = std::numeric_limits<int>::max();
	
	std::cout << "int\t";

	if (this->getValidCheck() == false || this->getDVal() < iMin || this->getDVal() > iMax || isnan(this->getDVal()))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << i << std::endl;

	return ;
}

void	Convert::printFloat( void ) const
{
	float	f = this->toFloat();
	float	fMax = std::numeric_limits<float>::max();

	std::cout << "float\t";

	if ( this->getValidCheck() == false )
	{
		std::cout << "impossible" << std::endl;
		return ;
	}

	if ( isinf(this->getDVal()) )
		;
	else if ( this->getDVal() < fMax * -1 || this->getDVal() > fMax )
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	
	if (f - this->toInt() == 0 && this->toInt() / 1000000 == 0)
	{
		std::cout.precision(1);
		std::cout.setf( std::ios::fixed );
		std::cout << f << "f" << std::endl;
		std::cout.unsetf( std::ios::fixed );
		std::cout.precision(6);
	}
	else
		std::cout << f << "f" << std::endl;

	return ;
}

void	Convert::printDouble( void ) const
{
	double	d = this->getDVal();

	std::cout << "double\t";

	if (this->getValidCheck() == false)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}

	if (d - this->toInt() == 0)
	{
		std::cout.precision(1);
		std::cout.setf( std::ios::fixed );
		std::cout << d << std::endl;
		std::cout.unsetf( std::ios::fixed );
		std::cout.precision(6);
	}
	else
		std::cout << d << std::endl;

	return ;
}
