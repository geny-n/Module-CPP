#ifndef DOG_HPP
#define DOG_HPP

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *_Brain;
	public :
		Dog(void);//constructeur default
		Dog(const Dog& f1); //constructeur de recopie
		Dog& operator=(const Dog& f);
		~Dog();
		void makeSound() const;
		Brain 				*getBrain(void) const;
		// void				setBrain(Brain const &brain);
};

#endif