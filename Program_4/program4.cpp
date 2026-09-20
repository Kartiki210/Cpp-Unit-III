#include <iostream>

class Counter {
private:
    int value;

public:
    // Constructor to initialize the counter
    explicit Counter(int initialValue = 0) : value(initialValue) {}

    // Prefix increment operator
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment operator
    Counter operator++(int) {
        Counter old = *this;
        ++value;
        return old;
    }

    // Modification: Prefix decrement operator
    Counter& operator--() {
        --value;
        return *this;
    }

    // Modification: Postfix decrement operator
    Counter operator--(int) {
        Counter old = *this;
        --value;
        return old;
    }

    // Function to display the counter value
    void display() const {
        std::cout << value << '\n';
    }
};

int main() {

    // Create a counter with initial value 5
    Counter counter(5);

    // Prefix increment
    std::cout << "After prefix increment: ";
    ++counter;
    counter.display();

    // Postfix increment
    std::cout << "Value returned by postfix increment: ";
    Counter oldValue = counter++;
    oldValue.display();

    std::cout << "Counter after postfix increment: ";
    counter.display();

    // Modification: Prefix decrement
    std::cout << "After prefix decrement: ";
    --counter;
    counter.display();

    // Modification: Postfix decrement
    std::cout << "Value returned by postfix decrement: ";
    Counter oldDecrementValue = counter--;
    oldDecrementValue.display();

    std::cout << "Counter after postfix decrement: ";
    counter.display();

    return 0;
}
