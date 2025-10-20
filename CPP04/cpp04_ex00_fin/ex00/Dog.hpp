#ifndef DOG_HPP
#define DOG_HPP

#include "iostream"
#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog(void);//constructeur default
		Dog(const Dog& f1); //constructeur de recopie
		Dog& operator=(const Dog& f);
		~Dog();
		void makeSound() const;
};

#endif