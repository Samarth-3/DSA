#include <iostream>
using namespace std;

void reverse_arr(int arr[], int size) {
    int counter = size;
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[counter - 1];
        arr[counter - 1] = temp;
        counter--;
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_arr(arr, size);

    return 0;
}
