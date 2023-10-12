#include <iostream>
#include <string>
using namespace std;


class BankAccount 
{

private:
    string depositorName,accountType;
    int balance,accountNumber;

public:

    BankAccount(string name, int accountNum, string type,int totalBalance) 
    {
        depositorName = name;
        accountNumber = accountNum;
        accountType = type;
        balance = totalBalance;
    }


    string getDepositorName() 
    {
        return depositorName;
    }


    int getAccountNumber()
    {
        return accountNumber;
    }


    string getAccountType() 
    {
        return accountType;
    }


    int getBalance() 
    {
        return balance;
    }
};

int main()
{

    BankAccount account("Nevil Bhayani", 704123617, "Savings", 10000);

    cout << "Depositor Name : " << account.getDepositorName() << endl;
    cout << "Account Number : " << account.getAccountNumber() << endl;
    cout << "Account Type : " << account.getAccountType() << endl;
    cout << "Balance : " << account.getBalance() << endl;

    return 0;
}
