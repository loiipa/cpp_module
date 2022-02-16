/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:53 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 15:34:06 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
# define WRONG_HPP
# include "Brain.hpp"
# include <string>
# include <iostream>

class WrongAnimal
{
protected:

	std::string		type;

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	virtual ~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & rhs );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

};

class WrongCat : public WrongAnimal
{
private:

	Brain	*brain;

public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );

	WrongCat &	operator=( WrongCat const & rhs );

	void			makeSound( void ) const;
	Brain*			getBrain( void ) const;
	std::string		getBrainIdea( int const & idx ) const;
	void			setBrainIdea( int const & idx, std::string const & raw );

};

class WrongDog : public WrongAnimal
{
private:

	Brain	*brain;

public:

	WrongDog( void );
	WrongDog( WrongDog const & src );
	~WrongDog( void );

	WrongDog &	operator=( WrongDog const & rhs );

	void			makeSound( void ) const;
	Brain*			getBrain( void ) const;
	std::string		getBrainIdea( int const & idx ) const;
	void			setBrainIdea( int const & idx, std::string const & raw );

};

#endif
