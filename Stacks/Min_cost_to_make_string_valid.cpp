#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length()%2==1){
    return -1;
  }
  stack<char> st;
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch=='{'){
      st.push(ch);
    }
    else {
      //ch is close bracket
      if(!st.empty() && st.top()=='{'){
        st.pop();
      }
      else{
        st.push(ch);
      }
    }
  }
  
    int count1=0;
    int count2=0;

    while(!st.empty()){
      char top=st.top();
      if(top=='{'){
        count1++;
      }
      else{
        count2++;
      }
      st.pop();
    }
    return (count1+1)/2+(count2+1)/2;
    
}