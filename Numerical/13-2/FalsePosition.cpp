#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 2 * x * x * x - 2 * x - 5;
}

double e = 0.001;
double c;

double falsePosition(double a, double b)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Incorrect values of a and b." << endl;
        return 0;
    }

    int i = 1;
    c = a - (f(a) * ((b - a) / (f(b) - f(a))));

    while (fabs(f(c)) > e)
    {
        cout << "s=" << i << " | ";
        i++;
        cout << "a=" << fixed << setprecision(3) << a << " | ";
        cout << "b=" << fixed << setprecision(3) << b << " | ";
        cout << "f(a)=" << fixed << setprecision(3) << f(a) << " | ";
        cout << "f(b)=" << fixed << setprecision(3) << f(b) << " | ";

        c = a - (f(a) * ((b - a) / (f(b) - f(a))));

        if (f(c) == 0.0)
        {
            cout << "c=" << c << " | ";
            cout << "f(c)=" << fixed << setprecision(3) << f(c) << " | ";
            break;
        }
        else if (f(c) > 0)
        {
            cout << "c=" << c << " | ";
            cout << "f(c)=" << fixed << setprecision(3) << f(c) << " | ";
            b = c;
            cout << "b=c" << endl;
        }
        else
        {
            cout << "c=" << c << " | ";
            cout << "f(c)=" << fixed << setprecision(3) << f(c) << " | ";
            a = c;
            cout << "a=c" << endl;
        }
    }
    cout << "\nThe root is: " << fixed << setprecision(3) << c << endl;
}

int main()
{
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "The function used is: 2x^3 - 2x - 5" << endl;
    cout << "Initial a = " << fixed << setprecision(3) << a << endl;
    cout << "Initial b = " << fixed << setprecision(3) << b << endl
         << endl;

    falsePosition(a, b);

    return 0;
}
