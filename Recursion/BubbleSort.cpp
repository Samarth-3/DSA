#include <iostream>
using namespace std;

void sort(int arr[],int size){
    if(size==0||size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return sort(arr,size-1);
}

int main(){
    int arr[5]={3,6,1,8,2};
    int size=5;
    sort(arr,size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}