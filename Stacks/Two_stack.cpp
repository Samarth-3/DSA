#include<iostream>
using namespace std;

class TwoStack{
    public:
    int size;
    int top1;
    int top2;
    int *arr;


    TwoStack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }

    void push1(int num){
        if (top2-top1>1)
        {
            top1++;
            arr[top1]=num;
        }
    
    }

    void push2(int num){
        if (top2-top1>1)
        {
            top2--;
            arr[top2]=num;
        }


    }

    int pop1(){
        if (top1==-1)
        {
            return -1;
        }
        else{
            int ans =arr[top1];
            top1--;
            return ans;
        }

    }
    int pop2(){
        if (top2==size)
        {
            return -1;
        }
        else{
            int ans =arr[top2];
            top2++;
            return ans;
        }
    }

};
