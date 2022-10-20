/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:44:03 by agouet            #+#    #+#             */
/*   Updated: 2022/10/20 10:54:27 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

class Span{
	
	public:
	// canonic
	Span( void );
	~Span( void );
	Span(Span const &copy);
	Span &operator=(Span const &rhs);

	// surcharge && accessor
	Span(unsigned int N);
	std::vector<int> getstorage(void) const;

	// membre
	void addNumber(int nbr);
	int shortestSpan();
	int longestSpan();

	Span &my_fill_n(unsigned int from, unsigned int until, int value);

	private:
		unsigned int _N;
		std::vector<int> _storage;
		bool _is_fill;
};

std::ostream &operator<<(std::ostream &o, Span const &rhs);

#endif