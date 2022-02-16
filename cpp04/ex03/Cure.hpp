/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:41:19 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 20:43:35 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:

	Cure( void );
	Cure( Cure const & src );
	~Cure( void );

	Cure &		operator=( Cure const & rhs );
	AMateria*	clone( void ) const;
	void		use( ICharacter & target );

};

#endif
