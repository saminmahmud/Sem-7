#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r){
    int leftSize = m-l+1;
    int rightSize = r-m;

    vector<int> L(leftSize);
    vector<int> R(rightSize);

    int k = 0;
    for(int i=l;i<=m;i++){
        L[k] = arr[i];
        k++;
    }

    k = 0;
    for(int i=m+1;i<=r;i++){
        R[k] = arr[i];
        k++;
    }

    int i = 0, j = 0;
    int cur = l;
    while(i<leftSize && j<rightSize){
        if(L[i]<=R[j]){
            arr[cur] = L[i];
            i++;
        }else{
            arr[cur] = R[j];
            j++;
        }
        cur++;
    }

    while(i<leftSize){
        arr[cur] = L[i];
        i++;
        cur++;
    }

    while(j<rightSize){
        arr[cur] = R[j];
        j++;
        cur++;
    }

}


void mergeSort(vector<int> &arr, int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}