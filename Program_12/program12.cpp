#include <iostream>
#include <memory>
#include <vector>

// Abstract base class for all shapes
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double area() const = 0;

    // Pure virtual function to display shape name
    virtual void displayName() const = 0;

    // Virtual destructor
    virtual ~Shape() = default;
};

// Rectangle class derived from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize rectangle
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Calculate rectangle area
    double area() const override {
        return length * width;
    }

    // Display rectangle name
    void displayName() const override {
        std::cout << "Rectangle";
    }
};

// Circle class derived from Shape
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize circle
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    // Calculate circle area
    double area() const override {
        constexpr double PI = 3.141592653589793;
        return PI * radius * radius;
    }

    // Display circle name
    void displayName() const override {
        std::cout << "Circle";
    }
};

// Modification: Triangle class derived from Shape
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructor to initialize triangle
    Triangle(double givenBase, double givenHeight)
        : base(givenBase), height(givenHeight) {}

    // Calculate triangle area
    double area() const override {
        return 0.5 * base * height;
    }

    // Display triangle name
    void displayName() const override {
        std::cout << "Triangle";
    }
};

int main() {

    // Create a vector of Shape objects using unique pointers
    std::vector<std::unique_ptr<Shape>> shapes;

    // Add Rectangle object to the vector
    shapes.push_back(std::make_unique<Rectangle>(5.0, 3.0));

    // Add Circle object to the vector
    shapes.push_back(std::make_unique<Circle>(2.0));

    // Modification: Add Triangle object to the vector
    shapes.push_back(std::make_unique<Triangle>(6.0, 4.0));

    // Display the name and area of each shape
    for (const auto& shape : shapes) {
        shape->displayName();
        std::cout << " Area: " << shape->area() << '\n';
    }

    return 0;
}
