#include <iostream>
using namespace std;

// Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    int n = 5;

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    int key = 3;
    int result = binarySearch(arr, n, key);

    if(result != -1)
        cout << "\nElement found at index " << result;
    else
        cout << "\nElement not found";

    return 0;
}