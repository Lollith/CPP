/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:29:39 by lollith           #+#    #+#             */
/*   Updated: 2022/10/18 18:23:53 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
typename T::iterator  easyfind(T &container, int toFind){
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		return it;
	else
		throw std::string("No find");
}