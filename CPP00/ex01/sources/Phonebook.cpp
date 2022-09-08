/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:40:16 by agouet            #+#    #+#             */
/*   Updated: 2022/09/08 22:24:19 by lollith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <sstream>

using std::cout; // alleger lutilisation de cout
using std::endl;

Phonebook::Phonebook(void): index(0){
	return;
}
Phonebook::~Phonebook(void){
	return;
}

bool Phonebook::check_digit(std::string s)const
{
	for( unsigned i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]) == true)
			return (true);
	}
	return (false);
}

bool Phonebook::add(void)
{
	if ( index < 8)
	{
		this->m_contacts[index].SetFirstName();
		this->m_contacts[index].SetLastName();
		this->m_contacts[index].SetNickName();
		this->m_contacts[index].SetNumber();
		this->m_contacts[index].SetDark();
	}
	index++;
	if (index == 8)
		index = 0;
	return (true);
}

void Phonebook::display_table(void)
{
	cout <<std::setfill('-') << std::setw(46)<< " " << endl;
	cout <<  "|" ; 
	cout << std::setfill(' ') << std::setw(10) << "index   " << "|" ; // setfill initialise avant chqsue setw
	cout << std::setfill(' ') << std::setw(10) << "first_name" << "|"; 
	cout << std::setfill(' ') << std::setw(10) << "last_name" << "|"; 
	cout << std::setfill(' ') << std::setw(10) << "nickname " << "|" << endl; 
	cout <<std::setfill('-') << std::setw(46)<< " " << endl;
}

bool Phonebook::display(void) const
{
	for(int i = 0; i < 8; i ++)
	{
		cout << "|"<< std::setfill(' ') << std::setw(9) << i + 1 <<" |"; 
		
		if (this->m_contacts[i].GetFirstName().length() > 10)
			cout << std::setfill('-') << std::setw(9)<< this->m_contacts[i].GetFirstName().substr(0, 9)<<"." << "|"; //rempli du caractere (' '), pdt 10 fois
		else
			cout << std::setfill('-') << std::setw(10)<< this->m_contacts[i].GetFirstName() <<"|"; //rempli du caractere (' '), pdt 10 fois
		
		if (this->m_contacts[i].GetLastName().length() > 10)
			cout << std::setfill('-') << std::setw(9)<< this->m_contacts[i].GetLastName().substr(0, 9)<<"." << "|"; //rempli du caractere (' '), pdt 10 fois
		else
			cout << std::setfill('-') << std::setw(10)<< this->m_contacts[i].GetLastName() <<"|"; //rempli du caractere (' '), pdt 10 fois
		
		if (this->m_contacts[i].GetNickName().length() > 10)
			cout << std::setfill('-') << std::setw(9)<< this->m_contacts[i].GetNickName().substr(0, 9)<<"." << "|" << endl; //rempli du caractere (' '), pdt 10 fois
		else
			cout << std::setfill('-') << std::setw(10)<< this->m_contacts[i].GetNickName() <<"|" << endl; //rempli du caractere (' '), pdt 10 fois
	}
	return (true);
}

bool Phonebook::search(void)
{
	cout << endl;
	std::cout << "Choose index: " << std::endl;
	std::cin >> input;
	if (!check_digit(input))
		return (false);
	std::stringstream (input) >> index_user;
	if (index_user - 1 > 7 || index_user < 1 )
		return(false);	
	cout << "First name: " << this->m_contacts[index_user - 1].GetFirstName() << endl;
	cout << "Last name: " << this->m_contacts[index_user - 1].GetLastName() << endl;
	cout << "Nickname: " << this->m_contacts[index_user - 1].GetNickName() << endl;
	cout << "Number: " << this->m_contacts[index_user - 1].GetNumber() << endl;
	cout << "Darkest secret: " << this->m_contacts[index_user - 1].GetDark() << endl;
	return (true);
}

int Phonebook::enter_cmd(void){

	std::cout << "enter ADD, SEARCH or EXIT: " << std::endl;
	std::cin >> buff;
	if("ADD" == buff || "add" == buff)
		add();
	else if("SEARCH" == buff || "search" == buff || "s" == buff)
		{
			display_table();
			display();
			if (!search())
				std::cout << "Bad Index: enter 1 -> 8 " << std::endl;
		}
	else if("EXIT" == buff || "exit" == buff)
		return (false);
	else
		{
			cout << "ERROR: Bad input" << endl;
			return(true);
		}
	return (true);	
}
