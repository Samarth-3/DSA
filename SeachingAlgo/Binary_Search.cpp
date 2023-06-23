#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int begin = 0;
    int end = size - 1;
    while (end >= begin) {
        int mid = (begin + end) / 2;
        // mid=begin+(end-begin)/2
        if (arr[mid] == key) {
            cout << "Key is present." << endl;
            return mid ;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            begin = mid + 1;
        }
    }
   // cout << "Key is not present." << endl;
    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 5;
    int index= binarySearch(array, size, key);
    cout<<index;
}
