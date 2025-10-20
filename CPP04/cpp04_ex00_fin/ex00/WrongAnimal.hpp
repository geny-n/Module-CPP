#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"
#include "string"

class WrongAnimal
{
	protected :
		std::string _Type;
	public :
		WrongAnimal(void);//constructeur default
		WrongAnimal(const WrongAnimal& f1); //constructeur de recopie
		WrongAnimal& operator=(const WrongAnimal& f);
		virtual ~WrongAnimal();
		
		void makeSound() const;
		std::string getType() const;
};

#endif