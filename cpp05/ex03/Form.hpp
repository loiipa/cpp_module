/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:51:41 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 20:54:46 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
private:

	std::string	const	_name;
	bool				_signed;
	int const			_gradeSign;
	int const			_gradeExecute;

	static const int	_gradeHighest;
	static const int	_gradeLowest;
	
public:

	Form( void );
	Form( std::string const & name, int const & gradeSign, int const & gradeExecute );
	Form( Form const & src );
	virtual ~Form( void );

	Form &	operator=( Form const & rhs );

	std::string		getName( void ) const;
	bool			getSigned( void ) const;
	int				getGradeSign( void ) const;
	int				getGradeExecute( void ) const;
	void			beSigned( Bureaucrat const & bureaucrat );
	virtual void	execute( Bureaucrat const & executor ) const;

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

	class NotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	static int	getGradeHighest( void );
	static int	getGradeLowest( void );
	
};
std::ostream &	operator<<( std::ostream & o, Form const & rhs );
#endif
