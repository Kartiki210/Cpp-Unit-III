#include <iostream>

// Base class representing a general shape
class Shape {
public:
    // Virtual function to calculate area
    virtual double area() const {
        return 0.0;
    }

    // Virtual destructor
    virtual ~Shape() = default;
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Override area function for Rectangle
    double area() const override {
        return length * width;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize radius
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    // Override area function for Circle
    double area() const override {
        constexpr double PI = 3.141592653589793;
        return PI * radius * radius;
    }
};

// Function to print the area of any Shape
void printArea(const Shape& shape) {
    std::cout << "Area: " << shape.area() << '\n';
}

int main() {

    // Create a Rectangle object
    Rectangle rectangle(5.0, 3.0);

    // Create a Circle object
    Circle circle(2.0);

    // Display the area of the rectangle
    printArea(rectangle);

    // Display the area of the circle
    printArea(circle);

    return 0;
}
