#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"
#include "string"
#include <sstream>

class Brain
{
	protected :
		std::string _Ideas[100];
	public :
		Brain(void);//constructeur default
		Brain(const Brain& f1); //constructeur de recopie
		Brain& operator=(const Brain& f);
		~Brain();
		std::string getIdeas(int i);
		void setIdeas(int i, std::string idea);
		// virtual void makeSound() const;
		// std::string getType() const;
};

#endif