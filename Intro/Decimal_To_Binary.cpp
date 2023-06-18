#include <iostream>
#include<math.h>
using namespace std;
//for positive input only

int main(){
    int n,ans=0;
    n=-22;
    int i=0;
    
    while(n!=0){    
        int digit=n&1;
        ans=digit*pow(10,i)+ans;
        n=n >> 1;
        i++;
    }  
        cout<<ans;

//negative number ka code
//not correct ig
    // if (n<0)
    // {
    //  while(n!=0){    
    //     int digit=n&1;
    //     ans=digit*pow(10,i)+ans;
    //     n=n >> 1;
    //     i++;
    //     }   
    //     ans+=1;
    //     cout<<ans;
    // }
    
}