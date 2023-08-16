#include <bits/stdc++.h> 
void insertSort(stack<int> &stack ,int element){
	if(stack.empty() || (!stack.empty() && stack.top()<element) ){
		stack.push(element);
		return;
	}

	int w=stack.top();
	stack.pop();

	insertSort(stack,element);
	stack.push(w);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int element=stack.top();
	stack.pop();
	sortStack(stack);
	insertSort(stack,element);
}