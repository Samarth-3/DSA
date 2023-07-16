#include<iostream>
using namespace std;

void rowsSum(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){
    int arr[3][3]={{1,2,3},{3,3,3},{4,4,4}};
    rowsSum(arr,3,3);
}