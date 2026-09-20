#include <iostream>

class Complex {
private:
    int real;
    int imaginary;

public:
    // Constructor to initialize real and imaginary parts
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Overloading binary + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real,
                       imaginary + other.imaginary);
    }

    // Modification: Overloading binary - operator for subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real,
                       imaginary - other.imaginary);
    }

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

int main() {

    // Create two complex number objects
    Complex first(2, 3);
    Complex second(4, 5);

    // Add the two complex numbers
    Complex sum = first + second;

    // Modification: Subtract the two complex numbers
    Complex difference = first - second;

    // Display the first complex number
    std::cout << "First complex number: ";
    first.display();

    // Display the second complex number
    std::cout << "Second complex number: ";
    second.display();

    // Display the sum
    std::cout << "Sum: ";
    sum.display();

    // Modification: Display the difference
    std::cout << "Difference: ";
    difference.display();

    return 0;
}
