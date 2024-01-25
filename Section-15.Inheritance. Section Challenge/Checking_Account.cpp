#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{ name, balance } {
}

bool Checking_Account::withdraw(double amount) {
    
    Account::withdraw(per_check_fee); // withdraw fee from account
    return Account::withdraw(amount);
}

std::ostream& operator<<(std::ostream& os, const Checking_Account& account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}

