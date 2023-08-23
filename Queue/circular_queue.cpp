#include <bits/stdc++.h> 
class CircularQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
            if (front == 0 && rear==size - 1 || rear== ((front - 1) % (size - 1))) {
                //"stack is full";
                return 0;
            }
            else if(front==-1){
                front=rear=0;
            }
            else if(front!=0 && rear==size-1){
                rear=0;
            }
            else{
                rear++;
            }
            arr[rear]=value;
            return true;
        }
    

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        int ans=arr[front];
        if(front==-1){
            //stack empty hai 
            return -1;
        }
        else if(rear!=0 && front==size-1){
            front=0;
        }
        else if(front==rear){
            //single element hai 
            front=rear=-1;
        }
        else{
            front++;
        }
        return ans;
    }
};