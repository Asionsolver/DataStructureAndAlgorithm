// ! bisection method

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double c;
double func(double x) // define the function here, ie give the equation
{
    return x * x * x - x * x + 2;
}

void bisection_method(double a, double b)
{
    if (func(a) * func(b) > 0)
    {
        cout << "please enter your correct value of a and b." << endl;
        return;
    }

    c = a;
    while ((b - a) >= 0.001)
    {
        c = (a + b) / 2;
        if (func(c) == 0)
        {
            break;
        }
        else if (func(c) * func(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    cout << "The root is " << c << endl;
}
int main()
{
    double a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    bisection_method(a, b);
    return 0;
}