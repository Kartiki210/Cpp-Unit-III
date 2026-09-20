#include <iostream>
#include <string>

// Function to add two integers
int add(int first, int second) {
    return first + second;
}

// Function to add two double values
double add(double first, double second) {
    return first + second;
}

// Function to add three integers
int add(int first, int second, int third) {
    return first + second + third;
}

// Function to join two strings
std::string add(std::string first, std::string second) {
    return first + second;
}

int main() {

    // Calling add() function with two integers
    std::cout << "Sum of two integers: " << add(10, 20) << '\n';

    // Calling add() function with two double values
    std::cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';

    // Calling add() function with three integers
    std::cout << "Sum of three integers: " << add(10, 20, 30) << '\n';

    // Calling add() function with two strings
    std::cout << "Joined strings: " << add("Hello ", "World!") << '\n';

    return 0;
}
