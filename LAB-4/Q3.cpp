#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    void input()
    {
        cout << "Enter matrix elements:\n";

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    friend Matrix add(Matrix, Matrix);

    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

Matrix add(Matrix m1, Matrix m2)
{
    Matrix m3;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m3.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }

    return m3;
}

int main()
{
    Matrix m1, m2, m3;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "Enter second matrix:\n";
    m2.input();

    m3 = add(m1, m2);

    cout << "Sum of matrices:\n";
    m3.display();

    return 0;
}
