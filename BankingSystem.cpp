// BankingSystem.cpp
#include "Customer.h"
#include "Account.h"
#include <iostream>

int main() {
    Customer customer1(1, "John Doe", "john@example.com");
    Customer customer2(2, "Jane Smith", "jane@example.com");

    Account account1(101, &customer1, 1000.0);
    Account account2(102, &customer1, 500.0);
    Account account3(103, &customer2, 1500.0);

    customer1.addAccount(&account1);
    customer1.addAccount(&account2);
    customer2.addAccount(&account3);

    std::cout << "Customer Information:" << std::endl;
    customer1.displayCustomerInfo();
    std::cout << std::endl;
    customer2.displayCustomerInfo();

    std::cout << "\n\nPerforming Transactions:" << std::endl;
    account1.deposit(500.0);
    account2.withdraw(200.0);
    account3.withdraw(2000.0); // This should display an insufficient funds message.

    std::cout << "\nUpdated Customer Information:" << std::endl;
    customer1.displayCustomerInfo();
    std::cout << std::endl;
    customer2.displayCustomerInfo();

    return 0;
}
