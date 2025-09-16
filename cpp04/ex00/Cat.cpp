#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Constructor Cat called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Copy constructor Cat called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Assignment operator Cat called." << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaouuuuuu." << std::endl;
}
