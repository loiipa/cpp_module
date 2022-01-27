/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:22:42 by cjang             #+#    #+#             */
/*   Updated: 2022/01/27 21:17:52 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:

	std::string		_first_name;
	std::string		_last_name;
	std::string		_nick_name;
	std::string		_phone_number;
	std::string		_darkest_secret;

public:

	Contact(void);
	~Contact();

	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
	void	setcontact(std::string s[5]);
};


#endif
