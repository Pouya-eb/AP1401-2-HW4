#include "../include/checkingAccount.h"

CheckingAccount::CheckingAccount(double balance, double fee_)
    : Account(balance)
    , fee { fee_ }
{
}
bool CheckingAccount::withdraw(double amount)
{
}