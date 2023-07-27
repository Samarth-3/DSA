#include <bits/stdc++.h> 
void solve(vector<string> &ans,string &str,int index,string &output){
    if(index>=str.length()){
        if(output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    //exclude
    solve(ans,str,index+1,output);
    //include
    int element=str[index];
    output.push_back(element);
    solve(ans,str,index+1,output);
    output.pop_back();
    
    
}

vector<string> subsequences(string str){
	vector<string> ans;
	int index=0;
	string output="";
    solve(ans,str,index,output);
    return ans;
}

