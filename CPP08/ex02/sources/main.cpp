/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:07:16 by lollith           #+#    #+#             */
/*   Updated: 2022/11/12 15:38:51 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top de ma stack: " << mstack.top() << std::endl;

	std::cout << std::endl;

	mstack.pop();
	std::cout << "remove 1 top, newtop : " << mstack.top() << std::endl;

	std::cout << std::endl;

	std::cout << "taille de ma stack: " << mstack.size() << std::endl;

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
	std::cout << "ma stack (bottom to top): " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	--it; // end - 1 => top
	std::cout << std::endl;
	std::cout << "ma stack (bottom to top): " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::cout << std::endl;
	{
		std::cout << "========== Subject test : MutantStack ==========" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	

	std::cout << "========== Subject test : List ==========" << std::endl;
		std::list<int> mstack2;
		mstack2.push_front(5);
		mstack2.push_front(17);
		std::cout << mstack2.front() << std::endl << std::endl;
		mstack2.pop_front();
		std::cout << mstack2.size() << std::endl << std::endl;
		mstack2.push_back(3);
		mstack2.push_back(5);
		mstack2.push_back(737);
		mstack2.push_back(0);
		std::list<int>::iterator it3 = mstack2.begin();
		std::list<int>::iterator ite3 = mstack2.end();
		++it3;
		--it3;
		while (it3 != ite3)
		{
			std::cout << *it3 << std::endl;
			++it3;
		}
	
	std::cout << std::endl;
	std::cout << "reverse_iterator "<<std::endl;
	MutantStack<int>::reverse_iterator it2 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite2 = mstack.rend();
	++it2;
	--it2;
	std::cout << "ma stack (bottom to top): " << std::endl;
	while(it2!=ite2) 
	{ 
		std::cout << *it2 << std::endl; 
		++it2; 
	} 
	std::cout << std::endl;
		
	std::cout << std::endl;
	
	std::cout <<"copies: " <<std::endl;
	std::stack<int> s(mstack);
	MutantStack<int> st = mstack;
	

	std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
	std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
	st.pop();
	
	std::cout <<"satck 2 modifie => stack1 non modifiee " <<std::endl;
	std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
	std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
	
	return 0;
}