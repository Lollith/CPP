/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:37:31 by agritech          #+#    #+#             */
/*   Updated: 2022/10/05 17:00:41 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <fstream>

using std::cout;
using std::endl;

//----------------------------------classes internes---------------------------

//--------------------------------------------------------- canonic------------
ShrubberyCreationForm::ShrubberyCreationForm(){
    return;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy){
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
    if (this != &rhs)
        this->m_beSigned = rhs.getBeSigned();
    return(*this);
}

//----------------------------------------------surcharge------------------------
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery Creation Form", 145, 137, target ){
    return;
}

void ShrubberyCreationForm::create(std::string const target) const{
    std::ofstream fdout;
    std::string const file = target + "_shrubbery";
    char const *file2 = file.c_str();
    fdout.open(file2, std::ios::out);
fdout << "         * " << endl;
fdout << "        /|\\"<< endl;
fdout << "       /*|O\\" << endl;
fdout << "      /*/|\\*\\" << endl;
fdout << "     /X/O|*\\X\\" << endl;
fdout << "    /*/X/|\\X\\*\\" << endl;
fdout << "   /O/*/X|*\\O\\X\\" << endl;
fdout << "  /*/O/X/|\\X\\O\\*\\" << endl;
fdout << " /X/O/*/X|O\\X\\*\\O\\" << endl;
fdout << "/O/X/*/O/|\\X\\*\\O\\X\\" << endl;
fdout << "        |X|" << endl;
fdout << "        |X|" << endl;
fdout << endl;
    fdout.close();
    std::cout << file2 << "is created" << std::endl;
}
		



    