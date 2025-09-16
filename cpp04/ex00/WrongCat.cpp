#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Constructor WrongCat called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "Copy constructor WrongCat called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "Assignment operator WrongCat called." << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called." << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaouuuuuu." << std::endl;
}
