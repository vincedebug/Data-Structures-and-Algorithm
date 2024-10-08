#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
  }
}


int main() {

  int arr[] = {5, 2, 4, 1, 3};

  int n = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}