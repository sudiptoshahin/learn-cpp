#include<iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    int arr[n];
    int tempArr[n];
    
    if (n >= 1 && n <= 1000) {
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            if (arr[i] >=1 && arr[i] <= 10000) {
                continue;
            }
        }

        for(int i=0; i<n; i++) {
            tempArr[i] = arr[n-i-1];
        }
        for (int i=0; i<n; i++) {
            cout << tempArr[i] << " ";
        }
    }
}