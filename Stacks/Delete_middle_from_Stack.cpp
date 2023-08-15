//rec sol
#include <bits/stdc++.h> 
void solve(stack<int>&inputStack, int N,int count){
   if(count==N/2){
      inputStack.pop();
      return;
   }
   int ans=inputStack.top();
   inputStack.pop();

   //rec call
   solve(inputStack,N,count+1);

   inputStack.push(ans);

}

void deleteMiddle(stack<int>&inputStack, int N){
   int count=0;
	solve(inputStack, N, count);
}

//iterative is 

// temp stack usme push karo until size/2
// and then pop from main list 
// and push back in original stack from temp