#include <iostream>
using namespace std;

char maxOccurance(string s){
    int arr[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        char ch=s[i];
        int number=0;
        if (ch>='a'&& ch<='z')
        {
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
        

        //for max occ
        int maxi=-1;
        int ans=-1;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        char finalans='a'+ans;
        return finalans;
    }
    
}

int main(){
    string s;
    cin>>s;
    cout<<maxOccurance(s);
    return 0;
}
