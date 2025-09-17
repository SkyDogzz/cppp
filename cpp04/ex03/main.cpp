#include <iostream>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
	std::cout << "===== TEST 1: Basic Creation / Destruction =====" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		delete src;
	}

	std::cout << "\n===== TEST 2: LearnMateria edge cases =====" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());  // should be ignored (full)

		// learning NULL should do nothing
		src->learnMateria(NULL);

		delete src;
	}

	std::cout << "\n===== TEST 3: CreateMateria edge cases =====" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());

		AMateria* m1 = src->createMateria("ice");
		AMateria* m2 = src->createMateria("cure");	// not learned, should return NULL
		AMateria* m3 = src->createMateria("fire");	// completely unknown

		std::cout << "m1: " << (m1 ? m1->getType() : "NULL") << std::endl;
		std::cout << "m2: " << (m2 ? m2->getType() : "NULL") << std::endl;
		std::cout << "m3: " << (m3 ? m3->getType() : "NULL") << std::endl;

		delete m1;
		delete m2;
		delete m3;
		delete src;
	}

	std::cout << "\n===== TEST 4: Character equip/unequip/use =====" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		ICharacter* bob = new Character("bob");

		AMateria* ice = src->createMateria("ice");
		AMateria* cure = src->createMateria("cure");

		me->equip(ice);
		me->equip(cure);

		std::cout << "--- Use valid slots ---" << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);

		std::cout << "--- Use invalid slots ---" << std::endl;
		me->use(-1, *bob);	// invalid index
		me->use(42, *bob);	// invalid index

		std::cout << "--- Unequip tests ---" << std::endl;
		me->unequip(0);	   // should not delete ice
		me->use(0, *bob);  // slot empty, should do nothing
		me->unequip(0);	   // unequip empty slot, nothing happens
		me->unequip(42);   // invalid index

		std::cout << "--- Equip too many Materias ---" << std::endl;
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));  // 5th equip, should fail silently

		delete bob;
		delete me;
		delete src;
		// NOTE: unequipped materias (like ice) should be handled externally
		delete ice;
	}

	std::cout << "\n===== TEST 5: Deep Copy (constructor) =====" << std::endl;
	{
		Character* alice = new Character("Alice");
		alice->equip(new Ice());
		alice->equip(new Cure());

		Character* copy = new Character(*alice);

		std::cout << "Alice uses slot 0:" << std::endl;
		ICharacter* dummy = new Character("Dummy");
		alice->use(0, *dummy);

		std::cout << "Copy uses slot 0:" << std::endl;
		copy->use(0, *dummy);

		delete dummy;
		delete alice;
		delete copy;
	}

	std::cout << "\n===== TEST 6: Deep Copy (assignment) =====" << std::endl;
	{
		Character bob("Bob");
		bob.equip(new Ice());

		Character john("John");
		john.equip(new Cure());

		std::cout << "--- Before assignment ---" << std::endl;
		ICharacter* dummy = new Character("Dummy");
		bob.use(0, *dummy);
		john.use(0, *dummy);

		std::cout << "--- After assignment ---" << std::endl;
		john = bob;	 // should deep copy bob’s Materias
		john.use(0, *dummy);

		delete dummy;
	}

	std::cout << "\n===== TEST 7: Null Equip and Null Use =====" << std::endl;
	{
		Character test("Testy");
		test.equip(NULL);  // should do nothing

		Character target("Target");
		test.use(0, target);  // empty slot, nothing happens
	}

	std::cout << "\n===== ALL TESTS DONE =====" << std::endl;
	return 0;
}
