#include <iostream>
using namespace std;

void sort01(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    while (i <j) {
        while (arr[i] == 0 && i < j) {
            i++;
        }
        while (arr[j] == 1 && i < j) {
            j--;
        }
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}

int main() {
    int array[] = {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0};
    int size = sizeof(array) / sizeof(array[0]);
    sort01(array, size);
}
