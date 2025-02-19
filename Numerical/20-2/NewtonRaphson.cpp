#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x*x - x -1;
}

double f2(double x){
    return 3*x*x - 1;
}

double e = 0.00001;

double newtonRaphson(double a, double b){
    if(f(a)*f(b) >= 0){
        cout << "Incorrect values of a and b." << endl;
        return 0;
    }

    int i = 1;
    double x0 = (a + b) / 2;
    double x1 = x0 - (f(x0) / f2(x0));

    while(fabs(f(x1)) > e){
        cout << "s=" << i << " | ";
        i++;
        cout << "x0=" << fixed << setprecision(3) << x0 << " | ";
        cout << "f(x0)=" << fixed << setprecision(3) << f(x0) << " | ";
        cout << "f'(x0)=" << fixed << setprecision(3) << f2(x0) << " | ";
        cout << "x1=" << fixed << setprecision(3) << x1 << " | ";

        x1 = x0 - (f(x0) / f2(x0));

        if(f(x1) == 0.0){
            cout << "x1=" << x1 << " | ";
            cout << "f(x1)=" << fixed << setprecision(3) << f(x1) << " | ";
            break;
        }
        else{
            cout << "x1=" << x1 << " | ";
            cout << "f(x1)=" << fixed << setprecision(3) << f(x1) << " | ";
            x0 = x1;
            cout << "x0=x1" << endl;
        }
    }
    cout << "\nThe root is: " << fixed << setprecision(3) << x1 << endl;
}


int main(){
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "The function used is: x^3 - x - 1" << endl;
    cout << "Initial a = " << fixed << setprecision(3) << a << endl;
    cout << "Initial b = " << fixed << setprecision(3) << b << endl
         << endl;

    newtonRaphson(a, b);

    return 0;
}