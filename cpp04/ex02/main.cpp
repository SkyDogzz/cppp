#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "===== Abstract AAnimal Test =====" << std::endl;

    /*AAnimal a; //❌ should not compile, AAnimal is abstract now*/

    AAnimal* doggo = new Dog();
    AAnimal* kitty = new Cat();

    doggo->makeSound();
    kitty->makeSound();

    delete doggo;
    delete kitty;

    return 0;
}

