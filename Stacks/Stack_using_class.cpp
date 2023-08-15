#include <iostream>
// #include <stack>
using namespace std;

class stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int size){
        top=-1;
        this->size=size;
        arr=new int[size];
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top<=-1){
            cout<<"stack underflow";
        }
        else{
            top--;
        }
    }
    bool isempty(){
        if(top>=0){
            return 0;
        }
        else{return 1;}
    }
    void peek(){
        if(!isempty()){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"Nothing to show at top as satck is empty"<<endl;
        }
    }
};




int main(){
    // stack<int>s;
    // s.push(5);
    // s.push(2);
    // s.pop();
    // cout<<"top element is"<<s.top();
    // if(s.empty()){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    stack st(5);
    st.push(22);
    st.push(1);
    st.peek();
    st.pop();
    st.peek();
}