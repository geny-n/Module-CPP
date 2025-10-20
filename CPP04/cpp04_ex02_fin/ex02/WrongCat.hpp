#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "iostream"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	// private :
	// 	std::string type;
	public :
		WrongCat(void);//constructeur default
		WrongCat(const WrongCat& f1); //constructeur de recopie
		WrongCat& operator=(const WrongCat& f);
		~WrongCat();
		void makeSound() const;
		// std::string getType(void);
};

#endif