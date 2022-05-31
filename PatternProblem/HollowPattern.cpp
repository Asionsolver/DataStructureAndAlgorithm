#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int col, row, i, j;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << endl;

    cout << "Enter the number of columns: ";
    cin >> col;

    for (i = 1; i <= row; i++)
    {
        /* code */
        for (j = 1; j <= col; j++)
        {
            /* code */
            if (i == 1 || i == row)
            {
                /* code */
                cout << "*";
            }

            else if (j == 1 || j == col)
            {
                /* code */
                cout << "*";
            }

            else
            {
                /* code */
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}