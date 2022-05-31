// ! Row Changes Rectangle Number Pattern

// #include <iostream>
// #include <cmath>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     int col, row, i, j;

//     cout << "Enter the number of rows: ";
//     cin >> row;

//     cout << endl;

//     cout << "Enter the number of columns: ";
//     cin >> col;

//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ! Column Changes Rectangle Number Pattern

// #include <iostream>
// #include <cmath>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     int col, row, i, j;

//     cout << "Enter the number of rows: ";
//     cin >> row;

//     cout << endl;

//     cout << "Enter the number of columns: ";
//     cin >> col;

//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

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
        for (j = 1; j <= col; j++)
        {
            if (i > j)
            {
                cout << i;
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}