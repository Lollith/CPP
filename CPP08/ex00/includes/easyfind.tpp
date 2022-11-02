/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:29:39 by lollith           #+#    #+#             */
/*   Updated: 2022/10/24 09:00:32 by agouet           ###   ########.fr       */
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