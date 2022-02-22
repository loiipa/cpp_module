/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:12 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 16:56:19 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:

	std::string _target;
	
public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string const & target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );
	
	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );

	std::string		getTarget( void ) const;
	void			execute( Bureaucrat const & executor ) const;

};

#endif
