/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:12 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 20:16:08 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:

	std::string _target;
	
public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string const & target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm( void );
	
	PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );

	std::string		getTarget( void ) const;
	void			execute( Bureaucrat const & executor ) const;

};

#endif
