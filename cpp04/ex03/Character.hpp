/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:44:57 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 17:25:51 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter
{
private:

	std::string	_name;
	AMateria*	_inventory[4];

public:

	Character( void );
	Character( std::string const & name );
	Character( Character const & src );
	~Character( void );

	Character &	operator=( Character const & rhs );

	std::string const &	getName( void ) const;
	void	equip( AMateria* m );
	void	unequip( int idx );
	void	use( int idx, ICharacter & target );

	static const int	idx;

};

#endif
