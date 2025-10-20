#ifndef CAT_HPP
#define CAT_HPP

#include "iostream"
#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);//constructeur default
		Cat(const Cat& f1); //constructeur de recopie
		Cat& operator=(const Cat& f);
		~Cat();
		virtual void makeSound() const;
};

#endif