#include <iostream>
using namespace std;

bool check(string &str,int i){
    int n = str.length();
    if(i>=n-i-1){
        return 0;
    }
    if(str[i]==str[n-i-1]){
        return 1;
    }
    else{
        check(str,i=i+1);
    }
}

int main(){
string str="helleh";
cout<<check(str,0);
}