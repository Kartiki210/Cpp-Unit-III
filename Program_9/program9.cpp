#include <iostream>

class Animal {
public:
    // Virtual function for animal sound
    virtual void sound() const {
        std::cout << "Animal makes a sound\n";
    }

    // Virtual destructor
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    // Override sound function for Dog
    void sound() const override {
        std::cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    // Override sound function for Cat
    void sound() const override {
        std::cout << "Cat meows\n";
    }
};

// Modification: Cow class derived from Animal
class Cow : public Animal {
public:
    // Override sound function for Cow
    void sound() const override {
        std::cout << "Cow moos\n";
    }
};

int main() {

    // Create objects of Dog, Cat and Cow
    Dog dog;
    Cat cat;
    Cow cow;

    // Create a base class pointer
    Animal* animal = &dog;

    // Call Dog's sound function
    animal->sound();

    // Point to Cat object and call sound
    animal = &cat;
    animal->sound();

    // Modification: Point to Cow object and call sound
    animal = &cow;
    animal->sound();

    return 0;
}
