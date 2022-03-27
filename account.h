#include <iostream>
#include <vector>

#ifndef ACCOUNT_H
#define ACCOUNT_H
//need money class from alicia :)
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
    Money calculateBalance();
    friend std::ostream &operator<< (std::ostream &out, const Account &account); //this prints it

};
#endif //ACCOUNT_H