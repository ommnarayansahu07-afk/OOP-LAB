#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    void inputStudent()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Performance : public Student
{
protected:
    float marks;

public:
    void inputMarks()
    {
        cout << "Enter total marks out of 100: ";
        cin >> marks;
    }
};

class Graduation : public Performance
{
public:
    void displayResult()
    {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 90)
            cout << "Honors: Outstanding" << endl;
        else if (marks >= 75)
            cout << "Honors: Distinction" << endl;
        else if (marks >= 60)
            cout << "Honors: First Class" << endl;
        else
            cout << "Honors: No Honors" << endl;
    }
};

int main()
{
    Graduation g;

    g.inputStudent();
    g.inputMarks();
    g.displayResult();

    return 0;
}
