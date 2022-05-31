// ! Logic Building Blocks

/*

Rectangle Fill Pattern

        ***********
        ***********
        ***********
        ***********

? logic established

outer loop => i = 1, i <= row, i++
    inner loop => j = 1, j <= col, j++

            cout << "*";
        else
            cout << " ";
    end inner loop
    cout << endl;
end outer loop


Details:

let
    row = 3
    col = 5

When i = 1
{
first time:
            i = 1 <= 5 // true to go to next iteration
            j = 1 <= 5 // true and print *

second time:
            i = 1 <= 5 // outer loop value is not changed
            j = 2 <= 5 // but inner loop value is changed and print *

third time:
            i = 1 <= 5 // outer loop value is not changed
            j = 3 <= 5 // but inner loop value is changed and print *

Fourth time:
            i = 1 <= 5 // outer loop value is not changed
            j = 4 <= 5 // but inner loop value is changed and print *

Fifth time:
            i = 1 <= 5 // outer loop value is not changed
            j = 5 <= 5 // but inner loop value is changed and print *
}

print => *****

When i = 2
{
first time:
            i = 2 <= 5 // true to go to next iteration
            j = 1 <= 5 // true and print *

second time:
            i = 2 <= 5 // outer loop value is not changed
            j = 2 <= 5 // but inner loop value is changed and print *
    }

third time:
            i = 2 <= 5 // outer loop value is not changed
            j = 3 <= 5 // but inner loop value is changed and print *

fourth time:
            i = 2 <= 5 // outer loop value is not changed
            j = 4 <= 5 // but inner loop value is changed and print *

fifth time:
            i = 2 <= 5 // outer loop value is not changed
            j = 5 <= 5 // but inner loop value is changed and print *
}
print => *****
         *****
When i = 3
{
first time:
            i = 3 <= 5 // true to go to next iteration
            j = 1 <= 5 // true and print *

second time:
            i = 3 <= 5 // outer loop value is not changed
            j = 2 <= 5 // but inner loop value is changed and print *

third time:
            i = 3 <= 5 // outer loop value is not changed
            j = 3 <= 5 // but inner loop value is changed and print *

fourth time:
            i = 3 <= 5 // outer loop value is not changed
            j = 4 <= 5 // but inner loop value is changed and print *

fifth time:
            i = 3 <= 5 // outer loop value is not changed
            j = 5 <= 5 // but inner loop value is changed and print *
}

print => *****
         *****
         *****

*/

// ! Implementation With Code

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
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}