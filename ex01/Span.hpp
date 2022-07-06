/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:15:42 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/06 15:35:45 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
class Span {
public:
	Span();
	Span(unsigned int N);
	Span(Span const &rhs);
	~Span();
	Span &operator=(Span const &rhs);
	void addNumber(int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	class OutOfCapacityException : public std::exception {
		const char	*what() const throw();
	};
	class NoSpanPossibleException: public std::exception {
		const char	*what() const throw();
	};
	void fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
private:
	std::vector<int> _content;
	unsigned int _N;
};
#endif