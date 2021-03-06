/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:41:19 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 23:36:05 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:

	Ice( void );
	Ice( Ice const & src );
	~Ice( void );

	Ice &		operator=( Ice const & rhs );
	AMateria*	clone( void ) const;
	void		use( ICharacter & target );

};

#endif
