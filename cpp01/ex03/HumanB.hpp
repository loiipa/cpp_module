/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:57:48 by cjang             #+#    #+#             */
/*   Updated: 2022/02/01 12:27:43 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
class HumanB {
private:

	std::string		_name;
	Weapon*			_weapon;
	bool			_weaponFlag;

public:

	HumanB( std::string name );
	~HumanB();
	void	attack( void );
	void	setWeapon( Weapon& weapon );

};

#endif
