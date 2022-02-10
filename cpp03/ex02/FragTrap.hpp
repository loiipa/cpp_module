/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:41:07 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 00:43:31 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap &	operator=( FragTrap const & rhs );

	void	highFivesGuys( void );
};

#endif
