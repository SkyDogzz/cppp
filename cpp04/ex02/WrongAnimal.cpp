#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(void) {
	std::cout << "Constructor WrongAnimal called." << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "Copy constructor WrongAnimal called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Assignment operator WrongAnimal called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called." << std::endl;
}

const std::string& WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Do i even exist." << std::endl;
}
