#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x*x - x - 1;
}

double e = 0.001;

void SecantMethod(double a, double b){
    if(f(a) * f(b) >= 0){
        cout << "No root found in the given interval." << endl;
        return;
    }
    double c = a - f(a) * (b - a) / (f(b) - f(a));
    int i = 0;
    while(fabs(f(c)) > e){
        c = a - f(a) * ((b - a) / (f(b) - f(a)));
        i++;
        if(f(c) == 0.0){
            break;
        }else{
            a = b;
            b = c;
        }
    }
    cout << "Root: " << fixed << setprecision(4) <<  c << endl;
    cout << i<<endl;
}

int main(){
    double a, b;
    cin >> a >> b;

    SecantMethod(a, b);
    return 0;
}