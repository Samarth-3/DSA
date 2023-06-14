#include <iostream>
using namespace std;

int main(){
    int n=3;
    int counter=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<counter;
            counter++;
        }  
        cout<<endl;
    }
}

// 1
// 23
// 456