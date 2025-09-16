#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Constructor Cat called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Copy constructor Cat called." << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Assignment operator Cat called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor Cat called." << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const {
	std::cout << "Miaouuuuuu." << std::endl;
}
