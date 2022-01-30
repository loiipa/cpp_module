/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:26:13 by cjang             #+#    #+#             */
/*   Updated: 2022/01/30 16:40:38 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
private:

	std::string		_zombieName;

public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie();
	
	void	announce( void ) const;

};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
