#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    void input()
    {
        cout << "Enter elements of 3x3 matrix:\n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void upperTriangle()
    {
        cout << "Upper Triangle:\n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j >= i)
                    cout << a[i][j] << " ";
                else
                    cout << "  ";
            }

            cout << endl;
        }
    }
};

int main()
{
    Matrix obj;

    obj.input();
    obj.upperTriangle();

    return 0;
}
