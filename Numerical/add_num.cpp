#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<add(a, b)<<endl;
    return 0;
}