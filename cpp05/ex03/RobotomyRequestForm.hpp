/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:12 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 20:04:58 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{
private:

	std::string _target;
	
public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string const & target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );
	
	RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );

	std::string		getTarget( void ) const;
	void			execute( Bureaucrat const & executor ) const;

};

#endif
