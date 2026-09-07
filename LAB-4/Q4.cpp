#include <iostream>
using namespace std;

class Time
{
    int hour, minute;

public:
    void input()
    {
        cout << "Enter hour and minute: ";
        cin >> hour >> minute;
    }

    friend Time add(Time, Time);

    void display()
    {
        cout << hour << " hours " << minute << " minutes";
    }
};

Time add(Time t1, Time t2)
{
    Time t3;

    t3.minute = t1.minute + t2.minute;
    t3.hour = t1.hour + t2.hour;

    if (t3.minute >= 60)
    {
        t3.hour++;
        t3.minute = t3.minute - 60;
    }

    return t3;
}

int main()
{
    Time t1, t2, t3;

    t1.input();
    t2.input();

    t3 = add(t1, t2);

    cout << "Sum of time = ";
    t3.display();

    return 0;
}
