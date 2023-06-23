#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if (arr[mid]==k)
        {
            ans=mid;
            e=mid-1; //incase mid se pehle bhi koi element ho basically first element ke liye hai ye 
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        } 
        mid=(s+e)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        if (arr[mid]==k)
        {
            ans=mid;
            s=mid+1; 
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        } 
         mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int array[]={1,2,3,3,3,3,3,3,4};
    int size = sizeof(array) / sizeof(array[0]);
    int key=3;
    cout<<firstOcc(array,size,key)<<endl;
    cout<<lastOcc(array,size,key)<<endl;
}