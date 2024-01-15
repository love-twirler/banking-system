// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Account.h"

class Account; // Forward declaration

class Customer {
public:
    Customer(int customerId, const std::string& name, const std::string& email);
    void addAccount(Account* account);
    void displayCustomerInfo();

private:
    int customerId;
    std::string name;
    std::string email;
    std::vector<Account*> accounts;
};

#endif
