#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
	std::cout << "Constructor brain called." << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < IDEA_NUMBERS; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other)
		for (int i = 0; i < IDEA_NUMBERS; i++)
			this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called." << std::endl;
}
