#include<iostream>
#include<string>

using namespace std;


// ARRAYS IN CPP

int main() {

    string cars[10] = {};
    for(int i=0; i<10; i++) {
        cars[i] = "Car no "+to_string(i+1);
    }

    int arr[6] = {5, 2, 4, 6, 1, 3};

    for (int j=2; j<sizeof(arr); j++) {
        int key = arr[j];
        // insert arr[j] into the sorted sequence arr[1...j-1]
        int i = j - 1;
        while(i>0 && arr[i] > key) {
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }

    for (int i=0; i < sizeof(arr); i++) {
        cout << arr[i] << " ";
    }

    


    return 0;
}