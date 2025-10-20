#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"
#include "string"

class Animal
{
	protected :
		std::string _Type;
	public :
		Animal(void);//constructeur default
		Animal(const Animal& f1); //constructeur de recopie
		Animal& operator=(const Animal& f);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif