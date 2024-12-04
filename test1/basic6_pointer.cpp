#include <iostream>
#include <string>

using namespace std;

/***
 * pointer holds the memory address of a specific type variable
   or holds the dynamically allocated memory block.
 * Deference operator (*) => it holds the value
 * Address-of Operator (&) => it holds the address of the variable
 *
 */

int main() {

  int N = 0;
  cout << "Enter array size: ";
  cin >> N;
  cout << endl;

  int arr[N];
  for (int i=0; i<N; i++) {
    cin >> arr[i];
  }

  cout << "Entered numbers: ";
  for (int i=0; i<N; i++) {
    cout << arr[i];
  }
  cout << endl;


  int tempArr[N] = {};
  for(int i=0; i<4; i++) {
    tempArr[i] = arr[N-i-1];
  }

  cout << "Updated entered numbers: ";
  for (int i=0; i<N; i++) {
    cout << tempArr[i];
  }
  cout << endl;

  cout << arr[N] << endl;

  // [1, 3, 5, 7]
  /**
   * i = 0, 1, 2, 3
   * a[N-i] = a[i]
   */
  

  return 0;
}