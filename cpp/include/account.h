#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>

class Account {
public:
    Account(double balance = 0);
    virtual ~Account();
    Account(const Account&);
    Account(Account&&);
    Account& operator=(const Account&);
    Account& operator=(Account&&);

    void deposit(double);
    bool withdraw(double);
    double get_balance() const;

    // std::vector<Transaction> transactions_;

private:
    double balance_;
};

#endif