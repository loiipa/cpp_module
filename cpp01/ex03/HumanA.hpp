/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:15:03 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 17:20:56 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
class HumanA {
private:

	std::string		_name;
	Weapon&			_weapon;

public:

	HumanA( std::string name, Weapon& weapon );
	~HumanA();
	void	attack( void );

};

#endif
