// string ko itearte
// make a new stack and psuh value into in
// iterate satck using top element and psuh in ans string and pop karte raho from staack until empty




//rev using recurrison

void insertatbottom(stack<int> &stack,int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }
    int topelement=stack.top();
    stack.pop();
    insertatbottom(stack,element);

    stack.push(topelement);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }

    int element=stack.top();
    stack.pop();
    reverseStack(stack);

    insertatbottom(stack, element);
}