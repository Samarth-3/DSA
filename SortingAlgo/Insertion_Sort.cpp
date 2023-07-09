#include <iostream>
using namespace std;

void InsertionSort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
     for (int i = 0; i < size; i++) {
     cout << arr[i] << "\n";
        }
}

int main(){
    int arr[]={2,1,6,3,9,4};
    int size=sizeof(arr) / sizeof(int);
    InsertionSort(arr,size);
}

