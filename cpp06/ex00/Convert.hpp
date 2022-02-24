/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:09:54 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 14:47:41 by cjang            ###   ########.fr       */
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

	void	toChar( void ) const;
	void	toInt( void ) const;
	void	toFloat( void ) const;
	void	toDouble( void ) const;

};

#endif
// char* -> string -> double( 우선순위 상위 )
