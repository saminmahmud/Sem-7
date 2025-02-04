#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    if(linearSearch(arr,n,key)){
        cout<<"Element found in the array"<<endl;
    }else{
        cout<<"Element not found in the array"<<endl;
    }
    
    return 0;
}