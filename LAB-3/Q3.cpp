#include <iostream>
using namespace std;

class Array
{
    int a[20], n, sum;

public:
    void input()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void calculate()
    {
        sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }

        cout << "Sum = " << sum << endl;
    }
};

int main()
{
    Array obj;

    obj.input();
    obj.calculate();

    return 0;
}
