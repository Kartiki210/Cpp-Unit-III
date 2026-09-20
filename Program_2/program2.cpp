#include <iostream>

// Function to calculate the area of a square
int calculateArea(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int calculateArea(int length, int width) {
    return length * width;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    constexpr double PI = 3.141592653589793;
    return PI * radius * radius;
}

// Modification: Function to calculate the area of a triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {

    // Calculate and display square area
    std::cout << "Square Area: " << calculateArea(5) << '\n';

    // Calculate and display rectangle area
    std::cout << "Rectangle Area: " << calculateArea(6, 4) << '\n';

    // Calculate and display circle area
    std::cout << "Circle Area: " << calculateArea(2.0) << '\n';

    // Modification: Calculate and display triangle area
    std::cout << "Triangle Area: " << calculateArea(5.0, 4.0) << '\n';

    return 0;
}
