#include "../include/customer.h"

Customer::Customer(const std::string& name_, const std::string& password_)
    : name { name_ }
    , password { password_ }
{
    std::cout << "customer constructor" << std::endl;
}
Customer::Customer(const Customer& customer)
    : Customer { customer.name, customer.password }
{
    std::cout << "copy constructor" << std::endl;
}
Customer::Customer(Customer&& customer)
    : Customer { customer.name, customer.password }
{
    customer.name = "";
    customer.password = "";
    std::cout << "move constructor" << std::endl;
}
Customer::~Customer()
{
    std::cout << "destructor" << std::endl;
}
bool Customer::authenticate(const std::string& password_)
{
    if (password == password_)
        return 1;
    return 0;
}
// void Customer::addAccount(Account* account, const Currency& currency)
// {
// }
