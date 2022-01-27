/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:23:26 by cjang             #+#    #+#             */
/*   Updated: 2022/01/27 16:49:52 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {
private:

	Contact		_contact[8];
	int			_num_contact;
	int			_index;

public:

	PhoneBook(void);
	~PhoneBook();

	void	loop(void);
	void	add(void);
	void	search(void);

};

#endif
