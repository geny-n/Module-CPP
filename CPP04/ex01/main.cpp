/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:18:36 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:22:41 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

int main()
{    
    /*****Test tab of animals and ideas****/
    const Animal *animals[10];
    int i = 0;
    int j = 0;
    while (i<10)
    {
        animals[i] = new Cat();
        while (j<100)
        {
            animals[i]->getBrain()->setIdeas(j, "I am a Cat");
            ++j;
        }
        j = 0;
        animals[++i] = new Dog();
        while (j<100)
        {
            animals[i]->getBrain()->setIdeas(j, "I am a Dog");
            ++j;
        }
        j = 0;
        ++i;
    }

    std::cout << std::endl; 
    i = 0;
    if (i >= 10)
        return 0;
    std::cout << "Type = " << animals[i]->getType() << std::endl; 
    std::cout << "Type = " << animals[9]->getType() << std::endl; 
    std::cout << std::endl; 

    std::cout << std::endl; 
    std::cout << "Idea " << animals[8]->getBrain()->getIdeas(10) << std::endl; 
    std::cout << "Idea " << animals[9]->getBrain()->getIdeas(98) << std::endl; 
    std::cout << std::endl; 

    animals[0]->makeSound();
    animals[1]->makeSound();
    std::cout << std::endl; 

    /******Test deep copy for copy constructor CAT******* */
    const Cat *kitten = new Cat();
    kitten->getBrain()->setIdeas(0, "I am a kitten");
    const Cat *copy_cat = new Cat(*kitten);

    std::cout << std::endl; 
    std::cout << "Type = " << kitten->getType() << std::endl;
    std::cout << "Type = " << copy_cat->getType() << std::endl;
    std::cout << "Idea kitten " << kitten->getBrain()->getIdeas(0) << std::endl; 
    std::cout << "Idea copy_cat " << copy_cat->getBrain()->getIdeas(0) << std::endl;

    std::cout << "Address kitten = " << kitten->getBrain() << std::endl;
    std::cout << "Address copy_cat = " << copy_cat->getBrain() << std::endl;
    std::cout << std::endl;
     
     /******Test deep copy for copy constructor DOG******* */
     const Dog *doggy = new Dog();
     doggy->getBrain()->setIdeas(0, "I am a doggy");
     const Dog *copy_Dog = new Dog(*doggy);
 
     std::cout << std::endl; 
     std::cout << "Type = " << doggy->getType() << std::endl;
     std::cout << "Type = " << copy_Dog->getType() << std::endl;
     std::cout << "Idea doggy " << doggy->getBrain()->getIdeas(0) << std::endl; 
     std::cout << "Idea copy_Dog " << copy_Dog->getBrain()->getIdeas(0) << std::endl;
 
     std::cout << "Address doggy = " << doggy->getBrain() << std::endl;
     std::cout << "Address copy_Dog = " << copy_Dog->getBrain() << std::endl;
     std::cout << std::endl;

    /******Test deep copy for assignment operator CAT******* */
    Cat *catcat = new Cat();
    catcat->getBrain()->setIdeas(0, "I am a catcat");
    Cat *copy_catcat = new Cat(); 
    *copy_catcat = *catcat;
    
    std::cout << std::endl; 
    std::cout << "Type = " << catcat->getType() << std::endl;
    std::cout << "Type = " << copy_catcat->getType() << std::endl;
    std::cout << "Idea catcat " << catcat->getBrain()->getIdeas(0) << std::endl; 
    std::cout << "Idea copy_catcat " << copy_catcat->getBrain()->getIdeas(0) << std::endl;

    std::cout << "Address catcat = " << catcat->getBrain() << std::endl;
    std::cout << "Address copy_catcat = " << copy_catcat->getBrain() << std::endl;

    /******Test deep copy for assignment operator DOG******* */
    Dog *dogdog = new Dog();
    dogdog->getBrain()->setIdeas(0, "I am a dogdog");
    Dog *copy_dogdog = new Dog(); 
    *copy_dogdog = *dogdog;
    
    std::cout << std::endl; 
    std::cout << "Type = " << dogdog->getType() << std::endl;
    std::cout << "Type = " << copy_dogdog->getType() << std::endl;
    std::cout << "Idea dogdog " << dogdog->getBrain()->getIdeas(0) << std::endl; 
    std::cout << "Idea copy_dogdog " << copy_dogdog->getBrain()->getIdeas(0) << std::endl;

    std::cout << "Address dogdog = " << dogdog->getBrain() << std::endl;
    std::cout << "Address copy_dogdog = " << copy_dogdog->getBrain() << std::endl;

    /******Delete*****/
    std::cout << std::endl; 
    i = 0;
    while (i<10)
    {
        delete(animals[i]);
        ++i;
    }
    delete (kitten);
    delete (copy_cat);
    delete (doggy);
    delete (copy_Dog);
    delete (catcat);
    delete (copy_catcat);
    delete (dogdog);
    delete (copy_dogdog);
    return 0;
}