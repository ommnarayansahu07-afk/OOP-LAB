#include <iostream>
using namespace std;

class Array
{
    int a[5];

public:
    // Constructor
    Array()
    {
        cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    // Friend function
    friend int sum(Array *);

    // Object pointer can call this function
    void display()
    {
        cout << "Array elements: ";

        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << " ";
        }
    }
};

// Friend function
int sum(Array *p)
{
    int s = 0;

    for (int i = 0; i < 5; i++)
    {
        s = s + p->a[i];
    }

    return s;
}

int main()
{
    // Object
    Array obj;

    // Object pointer
    Array *ptr;

    ptr = &obj;

    ptr->display();

    cout << "\nSum = " << sum(ptr);

    return 0;
}
