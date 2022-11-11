/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:39:20 by agouet            #+#    #+#             */
/*   Updated: 2022/11/11 14:49:33 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template< typename T, typename D >
void iter(T *tab, int size, D const (*f)( T &val)){
	for (int i = 0; i < size; i++)
	{
		(*f)(tab[i]);
	}
}

template< typename T, typename D  >
D const ft_display(T &d) 
{
	std::cout << "value: "<< d << std::endl;
}

template< typename T, typename D >
D ft_initializ(T &val)
{
	val = 0;
	return val;
}