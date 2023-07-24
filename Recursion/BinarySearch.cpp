#include <iostream>
using namespace std;

bool binary(int arr[],int s,int e,int key){
    int mid=(s+e)/2;

    if(arr[mid]==key ){
        return 1;
    }
    if(s>e ){
        return 0;
    }

    if (arr[mid]>key)
    {
        return binary(arr,s,mid-1,key);
    }
    else{
        return binary(arr,mid+1,e,key);
    }
    
}

int main(){
    int arr[5]={1,2,22,4,5};
    int key=4;
    cout<<binary(arr,0,4,212);
}