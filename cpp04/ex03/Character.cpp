#include "Character.hpp"

#include <iostream>

Character::Character(const std::string& name) : name(name) {
	for (int i = 0; i < 4; ++i)
		materia[i] = NULL;
	std::cout << "Character " << this->name << " constructed.\n";
}

Character::Character(const Character& other) : name(other.name) {
	std::cout << "Character copy-construct " << other.name << ".\n";
	for (int i = 0; i < 4; ++i)
		materia[i] = other.materia[i] ? other.materia[i]->clone() : NULL;
}

Character& Character::operator=(const Character& other) {
	std::cout << "Character copy-assign from " << other.name << ".\n";
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < 4; ++i) {
			delete materia[i];
			materia[i] = other.materia[i] ? other.materia[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete materia[i];
	std::cout << "Character " << this->name << " destroyed.\n";
}

std::string const& Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; ++i) {
		if (!materia[i]) {
			materia[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return;
	materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4)
		return;
	if (materia[idx])
		materia[idx]->use(target);
}
