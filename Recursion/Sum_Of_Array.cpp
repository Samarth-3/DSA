#include <iostream>
using namespace std;

int add(int *arr,int size){
    if(size==0){
        return 0;
    }
    return add(arr+1,size-1)+arr[0];
}

int main(){
    int arr[5]={1,2,2,4,5};
    int size=5;
    cout<<add(arr,size);
}