/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:46:36 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 11:56:35 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
class Brain
{
public:

	std::string	ideas[100];
	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain &	operator=( Brain const & rhs );

	std::string	getIdea( int const & idx ) const;
	void		setIdea( int const & idx, std::string const & raw );

};

#endif
