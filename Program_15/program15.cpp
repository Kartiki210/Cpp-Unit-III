#include <iostream>
#include <string>

class Payment {
public:
    // Pure virtual function for making payment
    virtual void pay(double amount) const = 0;

    // Virtual destructor
    virtual ~Payment() = default;
};

// Card payment class
class CardPayment : public Payment {
public:
    // Implement pay function for card
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using card\n";
    }
};

// UPI payment class
class UpiPayment : public Payment {
public:
    // Implement pay function for UPI
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using UPI\n";
    }
};

// Net banking payment class
class NetBankingPayment : public Payment {
public:
    // Implement pay function for net banking
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount
                  << " using net banking\n";
    }
};

// Modification: Wallet payment class
class WalletPayment : public Payment {
public:
    // Implement pay function for wallet
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount
                  << " using wallet\n";
    }
};

// Function to process any type of payment
void processPayment(const Payment& payment, double amount) {
    payment.pay(amount);
}

int main() {

    // Create payment objects
    CardPayment card;
    UpiPayment upi;
    NetBankingPayment netBanking;

    // Modification: Create WalletPayment object
    WalletPayment wallet;

    // Process different types of payments
    processPayment(card, 1250.0);
    processPayment(upi, 750.0);
    processPayment(netBanking, 500.0);

    // Modification: Demonstrate WalletPayment
    processPayment(wallet, 300.0);

    return 0;
}
