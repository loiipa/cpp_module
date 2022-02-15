/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:10 by cjang             #+#    #+#             */
/*   Updated: 2022/02/15 16:05:31 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:

	Brain	*brain;

public:

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog &	operator=( Dog const & rhs );

	void		makeSound( void ) const;

};

#endif
