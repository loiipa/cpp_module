/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:59:02 by cjang             #+#    #+#             */
/*   Updated: 2022/02/22 13:47:28 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

class Intern
{
private:

public:
	Intern( void );
	Intern( Intern const & src );
	~Intern( void );

	Intern &	operator=( Intern const & rhs );
	Form*		makeForm( std::string formName, std::string formTarget ) const;

	Form*		makeSForm( std::string const & target ) const;
	Form*		makeRForm( std::string const & target ) const;
	Form*		makePForm( std::string const & target ) const;

	class NotFoundFormException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

#endif
