#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next; //node type ka pointer

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &head,int d){
    Node* nod=new Node(d);
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=nod;
}
void insertAtPosition(Node* &head,int pos,int d){
    Node* nodetoInsert=new Node(d);
    Node* temp=head;
    if(pos==0){
        nodetoInsert->next=head;
        head=nodetoInsert;
        return;
    }else{
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;}
}
void deleteAtPos(Node* &head,int pos){
    Node* temp=head;
    if(pos==0){
        head=temp->next;
        delete temp;
        return;
    }else{
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->next=NULL;
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    //static
    Node n1(3);
    Node* head=&n1;
    insertAtHead(head,99);
    insertAtHead(head,88);
    insertAtHead(head,228);
    insertAtPosition(head,0,6767);
    print(head);
    
}
