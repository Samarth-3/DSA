#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
       for (int i = 0; i < size; i++) {
    cout << arr[i] << "\n";
       }
}


int main()
{
    int arr[] = {2, 1, 6, 3, 9, 4};
    int size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size);
}