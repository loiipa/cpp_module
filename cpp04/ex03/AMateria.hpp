/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:43:51 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 17:26:46 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class AMateria
{
protected:

	std::string	type;

public:

	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );

	AMateria &	operator=( AMateria const & rhs );
	std::string const & getType( void ) const;

	virtual AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter & target );

};

#endif
