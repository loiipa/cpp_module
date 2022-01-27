/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:22:42 by cjang             #+#    #+#             */
/*   Updated: 2022/01/28 01:45:25 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:

	static int		_contactCount;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_phoneNumber;
	std::string		_darkestSecret;

public:

	Contact(void);
	~Contact();

	std::string		getFirstname(void) const;
	std::string		getLastname(void) const;
	std::string		getNickname(void) const;
	std::string		getPhoneNumber(void) const;
	std::string		getDarkestSecret(void) const;
	void			setContact(std::string s[5]);
	
};

#endif
