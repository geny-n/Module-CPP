/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:16 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/25 16:31:49 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
/************MAIN SUJET************/
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
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
    return 0;
}

/************MAIN SUJET LIST************/
// int main()
// {
//     std::list<int> mstack;

//     // Simule push() de stack avec push_back()
//     mstack.push_back(5);
//     mstack.push_back(17);

//     // Simule top() de stack avec back()
//     std::cout << mstack.back() << std::endl;

//     // Simule pop() de stack avec pop_back()
//     mstack.pop_back();

//     // Taille
//     std::cout << mstack.size() << std::endl;

//     // Ajout d'éléments
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);

//     // Itérateurs sur std::list
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();

//     ++it;
//     --it;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     // Conversion list -> stack (avec espace entre les > > obligatoire en C++98)
//     std::stack<int, std::list<int> > s(mstack);

//     return 0;
// }


/************MAIN MOI************/

// int main()
// {
//     std::cout << CYAN << "***TEST DEFAULT CONSTRUCTOR***" << RESET << std::endl;

//     MutantStack<int> mstack;

//     std::cout << MAGENTA << "\nPushing éléments: 5, 17\n" << RESET;
//     mstack.push(5);
//     mstack.push(17);

//     std::cout << "Top element : " << mstack.top() << std::endl;  // Doit afficher 17

//     std::cout << "Pop() to remove the top element\n";
//     mstack.pop();

//     std::cout << "Size after pop : " << mstack.size() << std::endl;  // Doit afficher 1

//     std::cout << MAGENTA << "\nPushing more elements: 3, 53, 737\n" << RESET;
//     mstack.push(3);
//     mstack.push(53);
//     mstack.push(737);
//     mstack.push(0);

//     std::cout << CYAN << "\n***TEST ITERATION***\n" << RESET;

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     std::cout << MAGENTA << "Test ++it and --it\n" << RESET;
//     std::cout << "Before ++it et --it, *it = " << *it << std::endl;

//     ++it;
//     std::cout << "After ++it, *it = " << *it << std::endl;

//     --it;
//     std::cout << "After --it, *it = " << *it << std::endl;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;  // Affiche tous les éléments
//         ++it;
//     }

//     std::cout << CYAN << "\n***TEST CONST ITERATORS***\n" << RESET;
//     const MutantStack<int> cmstack = mstack;
//     MutantStack<int>::const_iterator cit = cmstack.begin();
//     MutantStack<int>::const_iterator cite = cmstack.end();

//     while (cit != cite)
//     {
//         std::cout << *cit << std::endl;  // Affiche tous les éléments en lecture seule
//         ++cit;
//     }
    
//     std::cout << CYAN << "\n***TEST COPY CONSTRUCTOR***\n" << RESET;
//     MutantStack<int> copyStack(mstack);
//     std::cout << "copyStack top: " << copyStack.top() << std::endl;
    
//     std::cout << CYAN << "\n***TEST ASSIGNMENT OPERATOR***\n" << RESET;
//     MutantStack<int> assignStack;
//     assignStack = mstack;
//     std::cout << "assignStack top: " << assignStack.top() << std::endl;

//     std::cout << CYAN << "\nTEST MUSTANTSTACK -> STD::STACK CONVERSAION\n" << RESET;
//     //copie de la pile mstack(nom de l objet MutantStack<int>) dans stdStack (nom de l objet stack<int>)
//     std::stack<int> stdStack(mstack);
//     std::cout << "stdStack top: " << stdStack.top() << std::endl;

//     std::cout << std::endl;

//     return 0;
// }


/************MAIN MOI LIST************/

// int main()
// {
//     std::cout << CYAN << "***TEST DEFAULT CONSTRUCTOR***" << RESET << std::endl;

//     std::list<int> mstack;

//     std::cout << MAGENTA << "\nPushing éléments: 5, 17\n" << RESET;
//     mstack.push_back(5);
//     mstack.push_back(17);

//     std::cout << "Top element : " << mstack.back() << std::endl;  // Doit afficher 17

//     std::cout << "Pop() to remove the top element\n";
//     mstack.pop_back();

//     std::cout << "Size after pop : " << mstack.size() << std::endl;  // Doit afficher 1

//     std::cout << MAGENTA << "\nPushing more elements: 3, 53, 737\n" << RESET;
//     mstack.push_back(3);
//     mstack.push_back(53);
//     mstack.push_back(737);
//     mstack.push_back(0);

//     std::cout << CYAN << "\n***TEST ITERATION***\n" << RESET;

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();

//     std::cout << MAGENTA << "Test ++it and --it\n" << RESET;
//     std::cout << "Before ++it et --it, *it = " << *it << std::endl;

//     ++it;
//     std::cout << "After ++it, *it = " << *it << std::endl;

//     --it;
//     std::cout << "After --it, *it = " << *it << std::endl;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;  // Affiche tous les éléments
//         ++it;
//     }

//     std::cout << CYAN << "\n***TEST CONST ITERATORS***\n" << RESET;
//     const std::list<int> cmstack = mstack;
//     std::list<int>::const_iterator cit = cmstack.begin();
//     std::list<int>::const_iterator cite = cmstack.end();

//     while (cit != cite)
//     {
//         std::cout << *cit << std::endl;  // Affiche tous les éléments en lecture seule
//         ++cit;
//     }
    
//     std::cout << CYAN << "\n***TEST COPY CONSTRUCTOR***\n" << RESET;
//     std::list<int> copyStack(mstack);
//     std::cout << "copyStack top: " << copyStack.back() << std::endl;
    
//     std::cout << CYAN << "\n***TEST ASSIGNMENT OPERATOR***\n" << RESET;
//     std::list<int> assignStack;
//     assignStack = mstack;
//     std::cout << "assignStack top: " << assignStack.back() << std::endl;

//     std::cout << CYAN << "\nTEST LIST -> STD::STACK CONVERSION\n" << RESET;
//     std::stack<int, std::list<int> > stdStack(mstack); // espace entre > > pour C++98
//     std::cout << "stdStack top: " << stdStack.top() << std::endl;

//     std::cout << std::endl;

//     return 0;
// }