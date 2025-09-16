#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "===== Creating Dogs and Cats =====" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << "\n===== Array of Animals =====" << std::endl;
    Animal* animals[4];
    for (int k = 0; k < 2; k++) animals[k] = new Dog();
    for (int k = 2; k < 4; k++) animals[k] = new Cat();

    for (int k = 0; k < 4; k++) {
        std::cout << animals[k]->getType() << " says: ";
        animals[k]->makeSound();
    }

    for (int k = 0; k < 4; k++) delete animals[k];

    std::cout << "\n===== Deep Copy Test =====" << std::endl;
    Dog basic;
    {
        Dog tmp = basic; // copy constructor
    } // tmp destroyed → should not delete basic’s Brain

    return 0;
}

