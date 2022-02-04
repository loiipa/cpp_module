/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:41 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 13:41:06 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
private:

	std::string		_type;

public:

	Weapon( std::string type );
	~Weapon();
	std::string const & getType( void );
	std::string const & setType( std::string type );

};

#endif
