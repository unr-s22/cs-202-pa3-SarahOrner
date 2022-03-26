#include <iostream>
#include <vector>
#include "account.h"
using namespace std;

void Account::makeDeposit(Money deposit){
    deposits.push_back(deposit);
}
void Account::makeWithdrawals(Money withdrawal){
    withdrawals.push_back(withdrawal);
}
friend std::ostream &operator<< (std::ostream &out, const Account &account){
    out<<"Account Details"<<endl;
    out<<"--------------------------":<<endl;
    out<<"Current Balance: "<<account.getStartingBalance()<<endl; //need to calc current balance - make compute balance func, for loop, dep-withdraw
    out<<"--------------------------":<<endl;
    out<<"Number of Deposits: "<<account.getDeposits().size()<< endl;
    out<<"--------------------"<<endl;

    int i=1;
    for(auto& deposit: account.getDeposits()){
        out<<"( "<<i<<") ";
        i++;
        out<<deposit<<endl;
    }
    out<<"--------------------------":<<endl;
    out<<"Number of Withdrawals: "<<account.getWithdrawals().size()<< endl;
    out<<"--------------------------":<<endl;

    for(auto& withdrawal: account.getWithdrawals()){
        out<<"( "<<i<<") ";
        i++;
        out<<withdrawal<<endl;
    }

    return out;
}