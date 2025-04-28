#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x*x - x - 1;
}

double ff(double x){
    return 3*x*x - 1;
}

double fff(double x){
    return 6*x;
}

double e = 0.001;

void HalleyMethod(double a, double b){
    if(f(a) * f(b) >= 0){
        cout << "No root found in the given interval." << endl;
        return;
    }
    double x = (a+b) / 2;
    double x1 = x - ((2*f(x)*ff(x)) /(2* (ff(x) * ff(x)) - (f(x) * fff(x))));
    int i = 0;
    while(fabs(f(x)) > e){
        x1 = x - ((2*f(x)*ff(x)) /(2* (ff(x) * ff(x)) - (f(x) * fff(x))));
        i++;
        if(f(x1) == 0.0){
            break;
        }else{
            x = x1;
        }
    }
    cout << "Root: " << fixed << setprecision(4) <<  x1 << endl;
    cout << i<<endl;
}

int main(){
    double a, b;
    cin >> a >> b;

    HalleyMethod(a, b);
    
    return 0;
}