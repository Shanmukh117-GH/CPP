#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accountNumber;
    float balance;
public:
    string holdername;
    BankAccount(string a, float b, string n)
    {
        accountNumber = a;
        balance = b;
        holdername = n;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance=balance+amount;
            cout << "Deposited: " << amount << endl;
        } else 
        {
            cout << "Invalid Deposit AMOUNT" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance=balance-amount;
            cout << "Withdrawn: " << amount << endl;
        } else 
        {
            cout << "Invalid Withdrawal AMOUNT" << endl;
                
        }
    }

    void checkBalance() 
    {
        cout << "Account Holder : " << holdername << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    string a, name;
    float balance, d, w;

    cout << "Enter the account number, Account Holder name and balance: ";
    cin >> a >> name >> balance;

    BankAccount accS(a, balance, name);
    accS.checkBalance();

    cout << "\nEnter the amount credited into the account: ";
    cin >> d;
    accS.deposit(d);

    cout << "Enter the amount debited from the account: ";
    cin >> w;
    accS.withdraw(w);

    accS.checkBalance();

    return 0;
}



