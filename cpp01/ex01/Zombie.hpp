/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:26:13 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 12:31:34 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define ZNumber 42

# include <string>

class Zombie {
private:

	std::string		_zombieName;

public:

	Zombie( std::string name );
	~Zombie();

	void	initName( std::string name);
	void	announce( void ) const;

};

Zombie*	zombieHorde(int N, std::string name);

#endif
