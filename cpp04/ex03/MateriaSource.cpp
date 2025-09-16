#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource() {
	std::cout << "Constructor MateriaSource called." << std::endl;
	for (int i = 0; i < 4; i++)
		learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	std::cout << "Copy constructor MateriaSource called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (other.learned[i])
			learned[i] = other.learned[i]->clone();
		else
			learned[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	std::cout << "Assignment operator MateriaSource called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete learned[i];
			if (other.learned[i])
				learned[i] = other.learned[i]->clone();
			else
				learned[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor MateriaSource called." << std::endl;
	for (int i = 0; i < 4; i++)
		delete learned[i];
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!learned[i]) {
			learned[i] = m;
			std::cout << "MateriaSource learned " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource inventory full, can't learn " << m->getType() << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (learned[i] && learned[i]->getType() == type)
			return learned[i]->clone();
	}
	std::cout << "MateriaSource doesn't know " << type << std::endl;
	return NULL;
}
