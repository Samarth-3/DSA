#include <iostream>
using namespace std;

void prime(int n){

    if (n < 2) {
        cout << "Non Prime";
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Non Prime ";
            return;
        } 
    }
    cout<<"Prime";
}

int main(){
prime(9);
}