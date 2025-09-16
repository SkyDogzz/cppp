#include "AAnimal.hpp"

#include <iostream>

AAnimal::AAnimal(void) {
	std::cout << "Constructor AAnimal called." << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
	std::cout << "Copy constructor AAnimal called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "Assignment operator AAnimal called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal called." << std::endl;
}

const std::string& AAnimal::getType(void) const {
	return this->type;
}

void AAnimal::makeSound(void) const {
	std::cout << "Do i even exist." << std::endl;
}
