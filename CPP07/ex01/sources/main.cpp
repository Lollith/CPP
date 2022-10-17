/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:39:21 by agouet            #+#    #+#             */
/*   Updated: 2022/10/17 14:31:32 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"



int main(){

	int tab[2] = {3, 4};
	::iter<int, void >(tab, 2, &ft_display);
	::iter<int, int >(tab, 2, &ft_initializ);
	::iter<int, void >(tab, 2, &ft_display);
	std::cout << std::endl;

	std::string s[] = {"hello", "Bonjour"};
	::iter< std::string, void >(s, 2, &ft_display);

	std::cout << std::endl;
	float tab2[4] = {0.4, 2.1, 7.8, 8.3};
	::iter <float, void> (tab2, 4, &ft_display);
	::iter<float, float >(tab2, 4, &ft_initializ);
	::iter<float, void >(tab2, 4, &ft_display);

}