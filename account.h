#include <iostream>
#include <vector>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
    vector<Money> deposits;
    vector<Money> withdrawals;
    Money startingBalance;
public:
    void makeDeposit(Money deposit);
    void makeWithdrawals(Money withdrawal);
    Money getStartingBalance(){
        return startingBalance;
    }
    vector<Money> getDeposits(){
        return deposits;
    }
    vector<Money> getWithdrawals(){
        return withdrawals;
    }
    friend std::ostream &operator<< (std::ostream &out, const Dog &dog);

};
#endif //ACCOUNT_H