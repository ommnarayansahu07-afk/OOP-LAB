#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
    string title;
    string author;

public:
    void input()
    {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class EBook : public Book
{
private:
    double fileSize;

public:
    void inputEBook()
    {
        input();

        cout << "Enter file size in MB: ";
        cin >> fileSize;
    }

    void displayEBook()
    {
        display();
        cout << "File Size: " << fileSize << " MB" << endl;
    }
};

int main()
{
    EBook e;

    e.inputEBook();
    cout << "\n--- E-Book Details ---\n";
    e.displayEBook();

    return 0;
}
