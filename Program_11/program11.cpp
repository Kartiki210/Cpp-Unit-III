#include <iostream>

// Abstract base class representing a general shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;

    // Virtual destructor
    virtual ~Shape() = default;
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize rectangle dimensions
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Implement area function for Rectangle
    double area() const override {
        return length * width;
    }
};

// Modification: Derived class for Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructor to initialize triangle dimensions
    Triangle(double givenBase, double givenHeight)
        : base(givenBase), height(givenHeight) {}

    // Implement area function for Triangle
    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {

    // Create a Rectangle object
    Rectangle rectangle(8.0, 4.0);

    // Display rectangle area
    std::cout << "Rectangle Area: "
              << rectangle.area() << '\n';

    // Modification: Create a Triangle object
    Triangle triangle(6.0, 4.0);

    // Display triangle area
    std::cout << "Triangle Area: "
              << triangle.area() << '\n';

    return 0;
}
