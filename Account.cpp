// Account.cpp
#include "Account.h"
#include "Customer.h"

Account::Account(int accountId, Customer* owner, double balance) : accountId(accountId), owner(owner), balance(balance) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void Account::displayAccountInfo() {
    std::cout << "Account ID: " << accountId << ", Owner: " << owner->getName() << ", Balance: $" << balance << std::endl;
}
