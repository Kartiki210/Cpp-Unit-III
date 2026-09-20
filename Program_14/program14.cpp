#include <iostream>

class Base {
public:
    // Virtual display function
    virtual void display() const {
        std::cout << "Base object\n";
    }

    // Virtual destructor
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    // Override display function
    void display() const override {
        std::cout << "Derived object\n";
    }
};

// Function that receives Base object by value
void displayByValue(Base object) {
    object.display();
}

// Function that receives Base object by reference
void displayByReference(const Base& object) {
    object.display();
}

// Modification: Function that receives a pointer to Base
void displayByPointer(const Base* object) {
    object->display();
}

int main() {

    // Create a Derived object
    Derived derived;

    // Passing Derived object by value
    std::cout << "Passing by value: ";
    displayByValue(derived);

    // Passing Derived object by reference
    std::cout << "Passing by reference: ";
    displayByReference(derived);

    // Modification: Passing address of Derived object using pointer
    std::cout << "Passing by pointer: ";
    displayByPointer(&derived);

    return 0;
}
