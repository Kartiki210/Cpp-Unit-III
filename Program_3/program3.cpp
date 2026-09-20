#include <iostream>

// Class to demonstrate unary minus operator overloading
class Number {
private:
    int value;

public:
    // Constructor to initialize the value
    explicit Number(int givenValue) : value(givenValue) {}

    // Overloading unary minus operator
    Number operator-() const {
        return Number(-value);
    }

    // Function to display the value
    void display() const {
        std::cout << value << '\n';
    }
};

// Modification: Balance class
class Balance {
private:
    double balance;

public:
    // Constructor to initialize the balance
    explicit Balance(double givenBalance) : balance(givenBalance) {}

    // Overloading unary minus operator for balance
    Balance operator-() const {
        return Balance(-balance);
    }

    // Function to display the balance
    void display() const {
        std::cout << balance << '\n';
    }
};

int main() {

    // Create a Number object
    Number first(25);

    // Apply unary minus operator
    Number second = -first;

    std::cout << "Original value: ";
    first.display();

    std::cout << "Negated value: ";
    second.display();

    // Modification: Create a Balance object
    Balance originalBalance(5000.50);

    // Apply unary minus operator to balance
    Balance negativeBalance = -originalBalance;

    std::cout << "Original balance: ";
    originalBalance.display();

    std::cout << "Negative balance: ";
    negativeBalance.display();

    return 0;
}
