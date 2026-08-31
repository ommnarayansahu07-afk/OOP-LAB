#include <iostream>
using namespace std;

class Employee
{
    int code;
    char name[30], designation[30];
    float basicPay, TA, DA, HRA;

public:
    void input()
    {
        cout << "Enter Employee Code: ";
        cin >> code;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Basic Pay: ";
        cin >> basicPay;

        cout << "Enter TA: ";
        cin >> TA;

        cout << "Enter DA: ";
        cin >> DA;

        cout << "Enter HRA: ";
        cin >> HRA;
    }

    void display()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee Code = " << code << endl;
        cout << "Employee Name = " << name << endl;
        cout << "Designation = " << designation << endl;
        cout << "Basic Pay = " << basicPay << endl;
        cout << "TA = " << TA << endl;
        cout << "DA = " << DA << endl;
        cout << "HRA = " << HRA << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}
