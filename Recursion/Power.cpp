#include <iostream>
#include <cmath>
using namespace std;

int power(int a,int b){
    if(b==0){return 1;}
    if(b==1){return a;}
    int ans=power(a, b / 2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

// int power(int &a,int &b){
//     if(b==0){
//         return 1;
//     }
//     return a*pow(a,b-1);
// }

int main(){
    int a=3;
    int b=3;
    cout<<power(a,b);
}