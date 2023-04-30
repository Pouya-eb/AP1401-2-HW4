#include "../include/account.h"

Account::Account(double balance)
    : balance_ { balance }
{
    std::cout << "account constructor" << std::endl;
}
Account::~Account()
{
    std::cout << "account destructor" << std::endl;
}
Account::Account(const Account& account)
    : Account { account.balance_ }
{
    std::cout << "copy constructor" << std::endl;
}
Account::Account(Account&& account)
    : balance_ { account.balance_ }
{
    account.balance_ = 0;
    std::cout << "move constructor" << std::endl;
}
Account& Account::operator=(const Account& account)
{
    std::cout << "operato = copy version" << std::endl;
    balance_ = account.balance_;
    return *this;
}
Account& Account::operator=(Account&& account)
{
    std::cout << "operato = move version" << std::endl;
    balance_ = account.balance_;
    account.balance_ = 0;
    return *this;
}
void Account::deposit(double amount)
{
    balance_ += amount;
    std::cout << "account deposit : " << balance_ << std::endl;
}
bool Account::withdraw(double amount)
{
    if (balance_ < amount) {
        std::cout << "There is not enough money to withdraw" << std::endl;
        return 0;
    }
    balance_ -= amount;
    return 1;
}
double Account::get_balance() const
{
    return balance_;
}