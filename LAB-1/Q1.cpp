#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculate()
    {
        float area = 3.14159 * radius * radius;
        float circumference = 2 * 3.14159 * radius;

        cout << "Area = " << area << endl;
        cout << "Circumference = " << circumference << endl;
    }
};

int main()
{
    Circle c;

    c.input();
    c.calculate();

    return 0;
}
