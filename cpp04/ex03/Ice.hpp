/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:41:19 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 20:43:35 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class Ice
{
public:
	Ice( void );
	Ice( Ice const & src );
	~Ice( void );

	Ice &	operator=(Ice const & rhs ) const;
};

#endif
