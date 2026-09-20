#include <iostream>

class Distance {
private:
    int meters;

public:
    // Constructor to initialize distance
    explicit Distance(int value) : meters(value) {}

    // Overloading > operator to compare two distances
    bool operator>(const Distance& other) const {
        return meters > other.meters;
    }

    // Modification: Overloading == operator
    bool operator==(const Distance& other) const {
        return meters == other.meters;
    }

    // Function to display the distance
    void display() const {
        std::cout << meters << " meters\n";
    }
};

int main() {

    // Create two Distance objects
    Distance first(120);
    Distance second(90);

    // Display the first distance
    std::cout << "First distance: ";
    first.display();

    // Display the second distance
    std::cout << "Second distance: ";
    second.display();

    // Compare distances using > operator
    if (first > second) {
        std::cout << "First distance is greater\n";
    } else {
        std::cout << "Second distance is greater or equal\n";
    }

    // Modification: Compare distances using == operator
    if (first == second) {
        std::cout << "Both distances are equal\n";
    } else {
        std::cout << "Distances are not equal\n";
    }

    return 0;
}
