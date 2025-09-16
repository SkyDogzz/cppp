#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "===== Correct Polymorphism =====" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound(); // Cat sound
    j->makeSound(); // Dog sound
    meta->makeSound(); // Generic Animal sound

    delete meta;
    delete j;
    delete i;

    std::cout << "\n===== Wrong Polymorphism =====" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    wrong->makeSound(); // WrongAnimal sound
    wc->makeSound();    // WrongCat but prints WrongAnimal sound (no virtual)

    delete wrong;
    delete wc;
    return 0;
}
