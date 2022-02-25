/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:09:54 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 22:57:44 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <exception>
# include <limits>		//std::numeric_limits
# include <locale>		//std::isprint
# include <cmath>		//isnan isinf

class Convert
{
private:

	std::string	_sVal;
	double		_dVal;
	bool		_validCheck;
	
public:

	Convert( void );
	Convert( std::string const & str );
	Convert( Convert const & src );
	~Convert( void );

	Convert &	operator=( Convert const & rhs );
	
	std::string	getSVal( void ) const;
	double		getDVal( void ) const;
	bool		getValidCheck( void ) const;

	char		toChar( void ) const;
	int			toInt( void ) const;
	float		toFloat( void ) const;
	
	void		printAll( void ) const;
	void		printChar( void ) const;
	void		printInt( void ) const;
	void		printFloat( void ) const;
	void		printDouble( void ) const;

};

#endif
