/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:34:06 by agouet            #+#    #+#             */
/*   Updated: 2022/10/17 11:22:09 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void swap(T &arg1, T &arg2)
{
	T temp;

	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template< typename T >
T min(T const &arg1, T const &arg2){
	if(arg1 > arg2)
		return (arg2);
	else
		return(arg1); 
}

template< typename T >
T max(T const &arg1, T const &arg2){
	if(arg1 < arg2)
		return (arg2);
	else
		return(arg1); 
}