#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int findPeak(vector<int> &arr, int left, int right) {
    int mid = left + (right-left) / 2;

    //  check if middle is peak
    if ((mid == 0 || arr[mid] >= arr[mid-1]) && 
    (mid == arr.size() - 1 || arr[mid]) >= arr[mid+1]) {
        return mid;
    }

    //   if the left neighbor is greter, recurse on the left subarray
    if (mid > 0 && arr[mid-1] > arr[mid]) {
        return findPeak(arr, left, mid-1);
    }

    //  otherwise, reuse on the right subarray
    return findPeak(arr, mid+1, right);
}

int get_max(vector<int> &arr) {
    int max = arr[0];
    int maximum = 0;

    for (int i=0; i<arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int exponentiate(int x, int n) {
    int i = 0, ans = 1;

    while (i < n){
        ans = ans * x;
        i = i + 1;
    }
    return ans;
}

int main() {

    vector<int> arr = {1, 3, 20, 4, 1, 0};
    // int peakIndex = findPeak(arr, 0, arr.size()-1);

    // cout << "Peak element is at index: " << peakIndex << endl;
    // cout << "Peak value: " << arr[peakIndex] << endl;

    cout << "Max val: " << get_max(arr) << endl;

    int x_2 = exponentiate(2, 3);
    cout << "2^3 = " << x_2 << endl;

    return 0;
}