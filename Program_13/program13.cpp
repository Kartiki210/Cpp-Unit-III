#include <iostream>
#include <memory>

class Base {
public:
    // Virtual destructor
    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    // Derived class destructor
    ~Derived() override {
        std::cout << "Derived destructor\n";
    }
};

int main() {

    // Create a Derived object using unique_ptr
    std::unique_ptr<Base> pointer = std::make_unique<Derived>();

    // Object is automatically destroyed when pointer goes out of scope

    return 0;
}
