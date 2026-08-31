#include <iostream>
using namespace std;

class Number
{
public:
    int reverse(int n)
    {
        int rev = 0;

        while (n != 0)
        {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        return rev;
    }
};

int main()
{
    Number obj;
    int n, result;

    cout << "Enter a number: ";
    cin >> n;

    result = obj.reverse(n);

    cout << "Reverse = " << result << endl;

    return 0;
}
