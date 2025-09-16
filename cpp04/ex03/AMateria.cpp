#include "AMateria.hpp"

#include <iostream>

#include "ICharacter.hpp"

AMateria::AMateria(std::string const& type) : type(type) {}

AMateria::AMateria(const AMateria& other) {
	(void)other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	(void)other;
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "* generic materia use *" << std::endl;
}
