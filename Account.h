// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include "Customer.h"

class Customer; // Forward declaration

class Account {
public:
    Account(int accountId, Customer* owner, double balance = 0.0);
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountInfo();

private:
    int accountId;
    Customer* owner;
    double balance;
};

#endif
