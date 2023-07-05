#include <iostream>
using namespace std;

void selectionSort(int arr[],int size){
    
    for (int i = 0; i < size-1; i++)
    {
        int min_index=i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp; 
    }  
    for (int i = 0; i < size; i++) {
    cout << arr[i] << "\n";
}
}

int main(){
    int arr[]={2,1,6,3,9,4};
    int size=sizeof(arr) / sizeof(int);
    selectionSort(arr,size);
}

