#include <iostream>
using namespace std;

bool sorted(int *arr,int size){
    if(size==0 || size==1){
        return 1;
    }
    else if(arr[0]>arr[1]){
        return 0;
    }
    else{
        return sorted(arr+1,size-1);
    }
}
int main(){
    int arr[5]={1,2,22,4,5};
    int size=5;
    cout<<sorted(arr,size);
}