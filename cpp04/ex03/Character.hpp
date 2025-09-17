#pragma once

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character(const std::string& name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();

private:
	std::string name;
	AMateria*	materia[4];

public:
	std::string const& getName() const;
	void			   equip(AMateria* m);
	void			   unequip(int idx);
	void			   use(int idx, ICharacter& target);
};
