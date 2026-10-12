#include <iostream>
using namespace std;

class Account
{
protected:
    double balance;

public:
    void inputBalance()
    {
        cout << "Enter account balance: ";
        cin >> balance;
    }

    void displayBalance()
    {
        cout << "Account Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public Account
{
public:
    void calculateInterest()
    {
        double interest = balance * 5 / 100;

        cout << "Savings Interest (5%): Rs. "
             << interest << endl;
    }
};

class CheckingAccount : public Account
{
public:
    void calculateCharges()
    {
        double charges = 200;

        cout << "Checking Account Charges: Rs. "
             << charges << endl;

        cout << "Balance After Charges: Rs. "
             << balance - charges << endl;
    }
};

int main()
{
    SavingsAccount s;
    CheckingAccount c;

    cout << "--- Savings Account ---" << endl;
    s.inputBalance();
    s.displayBalance();
    s.calculateInterest();

    cout << "\n--- Checking Account ---" << endl;
    c.inputBalance();
    c.displayBalance();
    c.calculateCharges();

    return 0;
}
