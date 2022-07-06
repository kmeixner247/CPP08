/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:02:25 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/06 12:43:04 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <algorithm>

class NoOccurenceException : public std::exception {
	const char *what() const throw() {return ("No occurence in container!");}
};

template<typename T>
typename T::iterator	easyfind(T cont, int i)
{
	typename T::iterator it = find(cont.begin(), cont.end(), i);
	if (it == cont.end())
		throw NoOccurenceException();
	return (it);
}
#endif