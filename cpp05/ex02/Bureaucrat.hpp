/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:01:56 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 20:23:42 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "Form.hpp"
# include <iostream>
# include <string>

class Form;

class Bureaucrat
{
private:
	
	std::string const	_name;
	int					_grade;
	
	static const int	_gradeHighest;
	static const int	_gradeLowest;

public:

	Bureaucrat( void );
	Bureaucrat( std::string const & name, int const & grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat & operator=( Bureaucrat const & rhs );

	std::string	const	getName( void ) const;
	int					getGrade( void ) const;
	void				incrementGrade( void );
	void				decrementGrade( void );
	void				SignForm( Form & form ) const;
	void				executeForm( Form const & form );


	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	
	static int	getGradeHighest( void );
	static int	getGradeLowest( void );

};
std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );
#endif
