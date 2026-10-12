#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void inputPerson()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    void inputStudent()
    {
        cout << "Enter student roll number: ";
        cin >> rollNo;
    }
};

class Teacher : virtual public Person
{
protected:
    double salary;

public:
    void inputTeacher()
    {
        cout << "Enter teacher salary: ";
        cin >> salary;
    }
};

class TeachingAssistant : public Student, public Teacher
{
public:
    void display()
    {
        cout << "\n--- Teaching Assistant Details ---"
             << endl;

        displayPerson();

        cout << "Student Roll Number: "
             << rollNo << endl;

        cout << "Teacher Salary: Rs. "
             << salary << endl;
    }
};

int main()
{
    TeachingAssistant t;

    t.inputPerson();
    t.inputStudent();
    t.inputTeacher();

    t.display();

    return 0;
}
