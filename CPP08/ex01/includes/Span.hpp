/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:44:03 by agouet            #+#    #+#             */
/*   Updated: 2022/10/19 18:27:58 by agouet           ###   ########.fr       */
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

	Span &my_fill_n(int max);

	private:
		unsigned int _N;
		std::vector<int> _storage;
};

std::ostream &operator<<(std::ostream &o, Span const &rhs);

#endif