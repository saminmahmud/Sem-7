#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];  // Choose the element at the low index as the pivot
    int i = low + 1;       // Start comparing from the next element
    int j = high;

    while (true) {
        // Move i to the right while arr[i] is smaller than or equal to pivot
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        // Move j to the left while arr[j] is greater than the pivot
        while (arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);  
        } else {
            break;
        }
    }

    // Swap the pivot with the element at index j (final position of the pivot)
    swap(arr[low], arr[j]);
    return j; 
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int size;
    cout << "Enter Array Size: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter Array Elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, size - 1);

    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
