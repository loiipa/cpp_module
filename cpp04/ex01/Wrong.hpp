/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:53 by cjang             #+#    #+#             */
/*   Updated: 2022/02/14 16:27:50 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
# define WRONG_HPP
# include <string>
# include <iostream>

class WrongAnimal
{
protected:

	std::string		type;

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & rhs );

	std::string		getType( void ) const;
	void	makeSound( void ) const;

};

class WrongCat : public WrongAnimal
{
public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );

	WrongCat &	operator=( WrongCat const & rhs );

	void			makeSound( void ) const;

};

class WrongDog : public WrongAnimal
{
public:

	WrongDog( void );
	WrongDog( WrongDog const & src );
	~WrongDog( void );

	WrongDog &	operator=( WrongDog const & rhs );

	void			makeSound( void ) const;

};

#endif
