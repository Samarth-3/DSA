#include <iostream>
#include <vector>
using namespace std;

void merge(vector < int > & arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *arr1=new int[len1];
    int *arr2=new int[len2];

    int index=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[index++];
    }

    for(int i=0;i<len2;i++){
        arr2[i]=arr[index++];
    }

    //merging 2 sorted arr code
    int x = 0;
    int y = 0;
    index = s;
    while (x < len1 && y < len2) {
        if (arr1[x] < arr2[y]) {
            arr[index++] = arr1[x++];
        } else {
            arr[index++] = arr2[y++];
        }
    }

    // Copy any remaining elements from arr1 and arr2
    while (x < len1) {
        arr[index++] = arr1[x++];
    }
    while (y < len2) {
        arr[index++] = arr2[y++];
    }

    // Free the dynamically allocated memory
    delete[] arr1;
    delete[] arr2;

}
void solve(vector < int > & arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    solve(arr,s,mid);//left
    solve(arr,mid+1,e);//right
    merge(arr,s,e);
}
void mergeSort(vector < int > & arr, int n) {
    solve(arr,0,n-1);
}

