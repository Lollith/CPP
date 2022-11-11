/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:07:16 by lollith           #+#    #+#             */
/*   Updated: 2022/11/11 16:12:02 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "top de ma stack: " << mstack.top() << std::endl;
	
	std::cout << std::endl;
	
	mstack.pop();
	std::cout <<"remove 1 top, newtop : " << mstack.top() << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "taille de ma stack: "<< mstack.size() << std::endl;

	std::cout << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//...
	mstack.push(0);

	std::cout << "top de ma stack: " << mstack.top() << std::endl;
	std::cout << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end(); 
	
	std::cout << std::endl;
	
	++it; // begin+1 => prend le chiffre suivant
	while(it!=ite) 
	{ 
		std::cout << *it << std::endl; 
		++it; 
	} 
	--it; // end - 1 => top 
	while(it!=ite) 
	{ 
		std::cout << *it << std::endl; 
		++it; 
	} 

	std::stack<int> s (mstack);
	return 0;


}