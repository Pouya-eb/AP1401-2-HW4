#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "account.h"
#include "currency.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Customer {
public:
    Customer(const std::string&, const std::string&);
    Customer(const Customer&);
    Customer(Customer&&);
    ~Customer();
    // Customer& operator=(const Customer&);
    // Customer& operator=(Customer&&);

    bool authenticate(const std::string&);
    // void addAccount(Account*, const Currency&);
    // std::vector<Account*>& getAccounts(const Currency&);

private:
    std::string name;
    std::string password;

    std::unordered_map<const Currency*, std::vector<Account*>> accounts;
};

#endif