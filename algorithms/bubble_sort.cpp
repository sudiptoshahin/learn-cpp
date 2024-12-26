#include<iostream>

using namespace std;

/**
 * array with values
 * an inner loop that goes through the array and swaps values 
 * if the first value is higher than next value.
 * This loop must loop through one less value each time it runs
 * An outer loop that controls how many times the inner loop must run.
 * For an array with n value this luter loop must run n-1 times.
 */

void bubbleSort(int arr[], int size) {

    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void printArr(int arr[], int size) {
    for (int i=0; i<size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Length: " << n << endl;

    // before sorting
    bubbleSort(arr, n);

    // after sorting
    printArr(arr, n);

    return 0;
}