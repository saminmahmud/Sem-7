#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int size, int target){
  int left = 0;
  int right = size - 1;

  while(left <= right){
    int mid = left + (right - left) / 2;

    if(arr[mid] == target){
      return mid;
    }

    if(arr[mid] < target){
      left = mid + 1;
    }
    else{
      right = mid - 1;
    }

  }

  return -1;
}

int main(){
  int size;
  cout << "Enter Array Size: ";
  cin >> size;

  vector<int> arr(size); 
  cout << "Enter Array Elements: ";
  for(int i=0; i < size; i++){
    cin >> arr[i];
  }

  // Sort the array before binary search
  sort(arr.begin(), arr.end());

  cout << "The sorted array is: ";
  for(int i=0; i < size; i++){
    cout << arr[i] << " ";
  }

  int target;
  cout << "Enter Target value: ";
  cin >> target;

  int result = binarySearch(arr, size, target);

  if(result == -1){
    cout << "Target not found in the array" << endl;
  }
  else{
    cout << "Target found at index " << result << endl;
    cout << "The value is " << arr[result] << endl;
  }

  return 0;
}
