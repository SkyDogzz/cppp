#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		learned[i] = NULL;
	std::cout << "MateriaSource constructed.\n";
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; ++i)
		learned[i] = other.learned[i] ? other.learned[i]->clone() : NULL;
	std::cout << "MateriaSource copy-constructed.\n";
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; ++i) {
			delete learned[i];
			learned[i] = other.learned[i] ? other.learned[i]->clone() : NULL;
		}
	}
	std::cout << "MateriaSource copy-assigned.\n";
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		delete learned[i];
	std::cout << "MateriaSource destroyed.\n";
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; ++i) {
		if (!learned[i]) {
			learned[i] = m->clone();  // ✅ store a copy
			std::cout << "Learned " << m->getType() << ".\n";
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; ++i)
		if (learned[i] && learned[i]->getType() == type)
			return learned[i]->clone();
	std::cout << "Unknown materia type: " << type << ".\n";
	return NULL;
}
