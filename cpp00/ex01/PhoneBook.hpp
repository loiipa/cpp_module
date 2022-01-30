/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:23:26 by cjang             #+#    #+#             */
/*   Updated: 2022/01/28 01:32:17 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {
private:

	Contact		_contact[8];
	int			_numContact;
	int			_index;

public:

	PhoneBook(void);
	~PhoneBook();

	void		loop(void);
	void		add(void);
	void		search(void);

};

#endif
