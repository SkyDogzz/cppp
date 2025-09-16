#include "Animal.hpp"

#include <iostream>

Animal::Animal(void) {
	std::cout << "Constructor Animal called." << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Copy constructor Animal called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Assignment operator Animal called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Destructor Animal called." << std::endl;
}

const std::string& Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	std::cout << "Do i even exist." << std::endl;
}
