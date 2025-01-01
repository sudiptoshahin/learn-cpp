#include<iostream>

using namespace std;

/**
 * SELECTION SORT
 * an inner loop that goes through the array, finds the lowest value, 
 *  and moves it to the front of the array. This loop must loop through 
 *  one less value each time it runs
 * an outer loop that controls how many times the inner loop must run. For an array
 * with n values, this outer loop must run n-1 times.
 * 
 * IN_SHORT: Search through an array and keep track of the minimum value during
 * each iteration. At the end of the iteration, swap values.
 * 
 * TIME_COMPLEXITY: O(n^2) (quadratic time)
 */

int main() {
    int arr[] = {7, 12, 9, 11, 3};
    int N = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<N; i++) {
        int min = i;
        for (int j=i+1; j<N; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}