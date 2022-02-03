/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:57:08 by cjang             #+#    #+#             */
/*   Updated: 2022/02/02 22:21:28 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen {
private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:

	Karen( void );
	~Karen();
	void	complain( std::string level );

};

#endif
