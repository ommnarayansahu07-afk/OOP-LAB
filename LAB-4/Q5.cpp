#include <iostream>
using namespace std;

class Armstrong
{
    int n;

public:
    // Parameterized constructor
    Armstrong(int x)
    {
        n = x;
    }

    // Copy constructor
    Armstrong(Armstrong &a)
    {
        n = a.n;
    }

    void check()
    {
        int temp = n;
        int sum = 0;
        int digit;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == n)
            cout << n << " is an Armstrong number.";
        else
            cout << n << " is not an Armstrong number.";
    }
};

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong a1(n);

    // Copy constructor
    Armstrong a2(a1);

    a2.check();

    return 0;
}
