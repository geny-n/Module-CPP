#ifndef CAT_HPP
#define CAT_HPP

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *_Brain;
	public :
		Cat(void);//constructeur default
		Cat(const Cat& f1); //constructeur de recopie
		Cat& operator=(const Cat& f);
		~Cat();
		virtual void makeSound() const;
		// std::string const	&getType(void) const;
		Brain 				*getBrain(void) const;
		// void				setBrain(Brain const &brain);
};

#endif