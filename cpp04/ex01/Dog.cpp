#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal() {
	std::cout << "Constructor Dog called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Copy constructor Dog called." << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Assignment operator Dog called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor Dog called." << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const {
	std::cout << "Woof woof." << std::endl;
}
