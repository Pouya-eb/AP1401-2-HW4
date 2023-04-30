#include "../include/currency.h"

Currency::Currency(const std::string& name_, double exchange_rate)
    : name { name_ }
    , exchangeRate { exchange_rate }
{
    std::cout << "currency constructor" << std::endl;
}
Currency::~Currency()
{
    std::cout << "currency destructor" << std::endl;
}
std::string Currency::getName()
{
    return name;
}
double Currency::getExchangeRate()
{
    return exchangeRate;
}