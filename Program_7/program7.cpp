#include <iostream>

class Complex {
private:
    int real;
    int imaginary;

public:
    // Constructor to initialize real and imaginary parts
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Friend function for integer + Complex
    friend Complex operator+(int value, const Complex& number);

    // Modification: Friend function for integer - Complex
    friend Complex operator-(int value, const Complex& number);

    // Function to display the complex number
    void display() const {
        std::cout << real;

        if (imaginary >= 0) {
            std::cout << " + ";
        } else {
            std::cout << " - ";
        }

        std::cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

// Definition of friend + operator
Complex operator+(int value, const Complex& number) {
    return Complex(value + number.real, number.imaginary);
}

// Modification: Definition of friend - operator
Complex operator-(int value, const Complex& number) {
    return Complex(value - number.real, -number.imaginary);
}

int main() {

    // Create a Complex object
    Complex number(2, 3);

    // Add integer to complex number
    Complex result = 10 + number;

    std::cout << "Result of 10 + complex number: ";
    result.display();

    // Modification: Subtract complex number from integer
    Complex difference = 10 - number;

    std::cout << "Result of 10 - complex number: ";
    difference.display();

    return 0;
}
