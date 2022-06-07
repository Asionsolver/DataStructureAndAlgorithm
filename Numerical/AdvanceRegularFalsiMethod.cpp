#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

// ! define Function F(x)
#define f(x) (x * x * x * x) + 3 * (x * x * x) - 5 * (x * x) - 7 * (x)-10

int main()
{
    float xn, xp, x, fn, fp, f, e;

    int step = 1;

    // ? Fixed number of  decimal places
    cout << setprecision(6) << fixed;

// ? Enter initial value of xn, xp and pre-specified error e
up:

    cout << "Enter first guess of (xn): ";
    cin >> xn;

    cout << "Enter second guess of (xp): ";
    cin >> xp;

    cout << "Enter error e: ";
    cin >> e;

    fn = f(xn);
    fp = f(xp);

    // ? Check if the initial guesses are valid
    if (fn * fp > 0.0)
    {
        cout << "\nError: Initial guesses do not bracket the root.\n";
        goto up;
    }

    // * Implement the Advance Regular Falsi Method

    cout << endl
         << "****************************************************************************" << endl;
    cout << "****************************************************************************" << endl;
    cout << "               False Position Method                     " << endl;
    cout << "****************************************************************************" << endl;
    cout << "# of Iteration"
         << "\t"
         << "xn"
         << "\t"
         << "       " << f(xn) << "\t"
         << "       " << xp << "\t"
         << "       " << f(xp) << "\t"
         << "       "
         << "x new"
         << "\t"
         << "       "
         << "f(x) new"
         << "\t" << endl;

    cout << "----------------------------------------------------------------------------" << endl;

    do
    {
        x = xn - (xn - xp) * fn / (fn - fp);
        f = f(x);
        // ? Does not show the value of Ea for each iteration

        cout << "Iteration:" << step << "\t" << setw(10) << xn << "\t" << setw(10) << fn << "\t" << xp << "\t" << setw(10) << xp << "\t" << setw(10) << fp << "\t" << setw(10) << x << "\t" << setw(10) << f(x) << endl;
        if (fn * f < 0)
        {

            xp = x;
            fp = f;
        }

    } while (abs(f) > e);

    return 0;
}