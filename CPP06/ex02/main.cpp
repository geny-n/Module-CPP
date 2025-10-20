/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 03:39:50 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/03 03:39:50 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int n = std::rand() % 3;

    /*  la fonction renvoie un pointeur d une instance de Base,
        
        A herite de Base, donc A est aussi une base
    */
    if (n == 0)
    {
        std::cout << "This is base A" << std::endl;
        return (new A()); //new A creer un objet A et retourne un pointer vers une instance de Base
    }
    if (n == 1)
    {
        std::cout << "This is base B" << std::endl;
        return (new B());
    }
    if (n == 2)
    {
        std::cout << "This is base C" << std::endl;
        return (new C());
    }
    return NULL; 
}

/*
    Vérifier à l’exécution que l’objet pointé est bien du type demandé (ou dérivé), si A 
    sinon dynamic_cast retourne nullptr (pour les pointeurs) ou lance une exception std::bad_cast (pour les références).
*/
void identify(Base* p)
{
    A* aptr = dynamic_cast<A*>(p); // conversion du pointer p en pointer vers A*
    if (aptr != NULL) 
    {
        std::cout << "The type is A" << std::endl;
        return ;
    }
    B* bptr = dynamic_cast<B*>(p);
    if (bptr != NULL)
    {
        std::cout << "The type is B" << std::endl;
        return ;
    }
    C* cptr = dynamic_cast<C*>(p);
    if (cptr != NULL)
    {
        std::cout << "The type is C" << std::endl;
        return ;
    }
    std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type of the object is A" << std::endl;
        return;
    }
    catch(const std::bad_cast& e)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type of the object is B" << std::endl;
        return;
    }
    catch(const std::bad_cast& e)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type of the object is C" << std::endl;
        return; 
    }
    catch(const std::bad_cast& e)
    {
    }
    std::cout << "Type unknown" << std::endl;
}

int	main(void)
{
    std::srand(std::time(0)); // initialiser la graine de rand avec l'heure actuelle
	Base* ABC = generate(); // recupere un pointer A, B ou C qui est une Base
    identify(ABC); // envoi le pointer de la Base et virifie si c est bien un heritie de type A, B ou C
    identify(*ABC); // envoi la Base et verifie si c est de type A, B ou C
    delete ABC;
    return 0;
}
