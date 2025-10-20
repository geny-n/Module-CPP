#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* dog = new Dog(); //meme chose que "const Dog* dog = new Dog();"
const Animal* cat = new Cat();

const WrongAnimal* Wcat = new WrongCat();

std::cout << std::endl;
 Cat test;
 std::cout << std::endl;
 Animal test_a(test);
 std::cout << std::endl;
// test = test_a;

std::cout << std::endl;
std::cout << "Type : " << meta->getType() << std::endl;
meta->makeSound();
std::cout << std::endl;
std::cout << "Type : " << dog->getType() << std::endl;
dog->makeSound();
std::cout << std::endl;
std::cout << "Type : " << cat->getType() << std::endl;
cat->makeSound();
std::cout << std::endl;
std::cout << "Type : " << test_a.getType() << std::endl;
test_a.makeSound();
std::cout << std::endl;
std::cout << "Type : " << Wcat->getType() << std::endl;
Wcat->makeSound();

std::cout << std::endl;
delete meta;
delete dog;
delete cat;
delete Wcat;
return 0;
}