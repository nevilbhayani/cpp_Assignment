#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int balance;

public:
    BankAccount(string name, int totalBalance)
    {
        accountHolderName = name;
        balance = totalBalance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << ".    New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0)
        {
            if (balance >= amount)
            {
                balance -= amount;
                cout << "Withdrawn: " << amount << ".    New balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient balance for withdrawal." << endl;
            }
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void display()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "       Balance: " << balance << endl;
    }
};

int main()
{

    BankAccount account("Nevil Bhayani", 10000);

    account.display();
    account.deposit(5000);
    account.withdraw(3000);
    account.display();

    return 0;
}