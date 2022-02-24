/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:09:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 14:17:46 by cjang            ###   ########.fr       */
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
		if (str.length() > idx + 1 || (str.length() == idx + 1 && \
		(str[idx] != 'f' || ( str[idx] == 'f' && static_cast<int>(str.find('.')) == -1))))
		{
			throw (std::exception());
		}
		this->_validCheck = true;
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

void	Convert::toChar( void ) const
{
	char	c = static_cast<char>(this->getDVal());
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
}

void	Convert::toInt( void ) const
{
	int		i = static_cast<int>(this->getDVal());
	int		iMin = std::numeric_limits<int>::min();
	int		iMax = std::numeric_limits<int>::max();
	
	std::cout << "int\t";

	if (this->getValidCheck() == false || this->getDVal() < iMin || this->getDVal() > iMax || isnan(this->getDVal()))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << i << std::endl;
}

void	Convert::toFloat( void ) const
{
	float	f = static_cast<float>(this->getDVal());
	float	fMin = std::numeric_limits<float>::min();
	float	fMax = std::numeric_limits<float>::max();

	std::cout << "float\t";

	if ( this->getValidCheck() == false || \
	( (this->getDVal() < fMin || this->getDVal() > fMax) && !isinf(this->getDVal()) ) )
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << f << "f" << std::endl;
}

void	Convert::toDouble( void ) const
{
	double	d = static_cast<double>(this->getDVal());

	std::cout << "double\t";

	if (this->getValidCheck() == false)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << d << std::endl;
}
