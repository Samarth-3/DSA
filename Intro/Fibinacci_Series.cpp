#include <iostream>
using namespace std;

void ser(int x){
    int first=0;
    int second=1;
    int sum=0;
    for (int i = 3; i <=x; i++)
    {
        sum=first+second;
        first=second;
        second=sum;
    }
    cout<<sum;
    
}

int main() {
    ser(10);
}


//34