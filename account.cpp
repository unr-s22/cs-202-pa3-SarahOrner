
//hello

#include <iostream>
#include <vector>
#include "account.h"
using namespace std;

void Account::makeDeposit(Money deposit){
    deposits.push_back(deposit);
}

void Account::makeWithdrawals(Money withdrawal) {
    withdrawals.push_back(withdrawal);
}

Money Account::calculateBalance(){
    Money balance = account.getStartingBalance();
    for(auto& deposit: account.getDeposits()){
        balance = balance + deposit;
    }
    for(auto& withdrawal: account.getWithdrawals()){
        balance = balance - withdrawal;
    }
    return balance;
}
friend std::ostream &operator<< (std::ostream &out, const Account &account){
    out<<"Account Details"<<endl;
    out<<"--------------------------":<<endl;
    out<<"Current Balance: "<<account.calculateBalance()<<endl;
    out<<"--------------------------":<<endl;
    out<<"Number of Deposits: "<<account.getDeposits().size()<< endl;
    out<<"--------------------"<<endl;

    int i=1;
    for(auto& deposit: account.getDeposits()){ //for counters for deposit
        out<<"( "<<i<<") ";
        i++;
        out<<deposit<<endl;
    }
    out<<"--------------------------":<<endl;
    out<<"Number of Withdrawals: "<<account.getWithdrawals().size()<< endl;
    out<<"--------------------------":<<endl;

    i=1; //resetting i
    for(auto& withdrawal: account.getWithdrawals()){ //for counters for withdrawal
        out<<"( "<<i<<") ";
        i++;
        out<<withdrawal<<endl;
    }

    return out;
}
