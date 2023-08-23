#include <bits/stdc++.h> 
class Queue {
    int size;
    int qfront;
    int rear;
    int *arr;
public:
    Queue() {
        size = 100001; // Set the size
        arr = new int[size]; // Initialize the array with dynamic allocation
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear==size){
            cout<<"satck FUll";
        }
        else{
            arr[rear]=data;
            rear++;
        } 
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;                 // Return -1 if the queue is empty
        }
        int ans = arr[qfront];          // Dequeue the element
        qfront++;
        if (qfront == rear) {
            qfront = 0;
            rear = 0;                   // Reset indices if queue becomes empty
        }
        return ans;
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};