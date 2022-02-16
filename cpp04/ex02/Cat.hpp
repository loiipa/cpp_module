/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:10 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 13:59:47 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:

	Brain	*brain;

public:

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );

	Cat &	operator=( Cat const & rhs );

	void		makeSound( void ) const;
	Brain*		getBrain( void ) const;
	std::string	getBrainIdea( int const & idx ) const;
	void		setBrainIdea( int const & idx, std::string const & raw );

};

#endif
