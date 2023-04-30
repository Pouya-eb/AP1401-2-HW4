#include "../include/checkingAccount.h"

CheckingAccount::CheckingAccount(double balance, double fee_)
    : Account(balance)
    , fee { fee_ }
{
    std::cout << "checkingAccount constructor" << std::endl;
}
CheckingAccount::~CheckingAccount()
{
    std::cout << "checkingAccount destructor" << std::endl;
}
CheckingAccount::CheckingAccount(const CheckingAccount& checkingaccount)
    : CheckingAccount(checkingaccount.get_balance(), checkingaccount.fee)
{
    std::cout << "checkingAccount copy constructor" << std::endl;
}
CheckingAccount::CheckingAccount(CheckingAccount&& checkingaccount)
    : CheckingAccount(checkingaccount.get_balance(), checkingaccount.fee)
{
    std::cout << "checkingAccount move constructor" << std::endl;
    checkingaccount.deposit(-get_balance());
    checkingaccount.fee = 0;
}
CheckingAccount& CheckingAccount::operator=(const CheckingAccount& checkingaccount)
{
    std::cout << "operator = copy version" << std::endl;
    this->deposit(checkingaccount.get_balance() - this->get_balance());
    fee = checkingaccount.fee;
    return *this;
}
