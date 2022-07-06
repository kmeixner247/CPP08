/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:55:20 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/06 17:41:00 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(MutantStack const &rhs) {*this = rhs;}
	~MutantStack() {}
	MutantStack &operator=(MutantStack const &rhs)
	{
		std::stack<T>::operator=(rhs);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return (std::stack<T>::c.begin());}
	iterator end() {return (std::stack<T>::c.end());}
};
#endif