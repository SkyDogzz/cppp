#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "===== Abstract Animal Test =====" << std::endl;

    /*Animal a; //❌ should not compile, Animal is abstract now*/

    Animal* doggo = new Dog();
    Animal* kitty = new Cat();

    doggo->makeSound();
    kitty->makeSound();

    delete doggo;
    delete kitty;

    return 0;
}

