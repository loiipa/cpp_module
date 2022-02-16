/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:43:51 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 21:06:47 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>

class AMateria
{
protected:
	// ...

public:
	AMateria( std::string const & type );
	// ...
	std::string const & getType( void ) const;

	virtual AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter & target );

};

#endif
