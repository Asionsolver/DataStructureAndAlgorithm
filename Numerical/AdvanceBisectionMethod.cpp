#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x);
double f(double x)
{
    double a = pow(x, 3) - 2 * x - 5.0;
    return a;
}
int main()
{
    cout.precision(4);
    cout.setf(ios::fixed);
    double a, b, c, e, fa, fb, fc;
a:
    cout << "Enter the initial guesses:\na=";
    cin >> a;
    cout << "\nb=";
    cin >> b;
    cout << "\nEnter the degree of accuracy desired" << endl;
    cin >> e;
    if (f(a) * f(b) > 0)
    { // If f(a)*f(b)>0
        cout << "Please enter a different inital guess" << endl;
        goto a;
    }
    else
    {
        while (fabs(a - b) >= e)
        {
            c = (a + b) / 2.0;
            fa = f(a);
            fb = f(b);
            fc = f(c);
            cout << "a=" << a << "     "
                 << "b=" << b << "     "
                 << "c=" << c << "      fc=" << fc << endl;
            if (fc == 0) // if f(c)=0,
            {
                cout << "The root of the equation is " << c; /*print the root of the equation                                         and break out of the loop*/
                break;
            }

            if (fa * fc > 0) // if f(a)xf(c)>0,
            {
                a = c;
            }
            else if (fa * fc < 0)
            {
                b = c;
            }
        }
    }
    cout << "The root of the equation is " << c;
    return 0;
}