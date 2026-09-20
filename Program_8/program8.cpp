#include <iostream>

class Base {
public:
    // Base class display function
    void display() const {
        std::cout << "Base display function\n";
    }
};

class Derived : public Base {
public:
    // Derived class display function
    void display() const {
        std::cout << "Derived display function\n";
    }
};

int main() {

    // Create an object of Derived class
    Derived derivedObject;

    // Create a Base class pointer pointing to Derived object
    Base* basePointer = &derivedObject;

    // Call display() using Base class pointer
    std::cout << "Using base pointer: ";
    basePointer->display();

    // Modification: Direct call using Derived object
    std::cout << "Using derived object: ";
    derivedObject.display();

    return 0;
}
