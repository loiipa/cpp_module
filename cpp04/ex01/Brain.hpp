/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:46:36 by cjang             #+#    #+#             */
/*   Updated: 2022/02/15 16:31:15 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
public:

	std::string	ideas[100];
	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain &	operator=( Brain const & rhs );

	static void	setBrain( Brain & l, Brain const & r );

};

#endif
