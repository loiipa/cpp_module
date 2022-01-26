/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:23:26 by cjang             #+#    #+#             */
/*   Updated: 2022/01/27 02:39:40 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Phonebook {
public:

	Phonebook(void);
	~Phonebook(void);
	
	void	order_branch(void);
	void	add(void);
	void	exit(void);
	void	search(void);
	void	etc(void);
	
};

#endif
