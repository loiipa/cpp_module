/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:00:22 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 17:26:07 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria*	_inventory[4];

public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	~MateriaSource( void );

	MateriaSource & operator=( MateriaSource const & rhs );

	void		learnMateria( AMateria* m );
	AMateria*	createMateria( std::string const & type );

	static const int	idx;

};

#endif
