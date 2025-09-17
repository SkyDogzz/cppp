#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice() : AMateria("ice") {}
	AMateria* clone() const { return new Ice(*this); }
	void	  use(ICharacter& target);
};
