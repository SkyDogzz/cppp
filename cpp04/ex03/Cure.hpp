#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure() : AMateria("cure") {}
	AMateria* clone() const { return new Cure(*this); }
	void	  use(ICharacter& target);
};
