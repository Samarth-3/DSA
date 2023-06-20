#include <iostream>
using namespace std;

void alternative(int arr[], int size) {
    for (int i = 0; i < size; i=i+2)
    {
        if(i+1<size){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int array[]={1,2,3,4,5,6,7};
    alternative(array,7);
}