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

class Cure
{
public:
	Cure( void );
	Cure( Cure const & src );
	~Cure( void );

	Cure &	operator=(Cure const & rhs ) const;
};

#endif
