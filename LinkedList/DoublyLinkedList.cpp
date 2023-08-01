#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
int getLeng(Node* &head){
    int count=0;
    Node* temp=head;
    while(temp !=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}


void insertAtHead(Node* &head,int d){
    Node *nodetoinsert=new Node(d);
    if(head==NULL){
        head=nodetoinsert;
        return;
    }
    nodetoinsert->next=head;
    head->prev=nodetoinsert;
    head=nodetoinsert;
}


void insertAtLast(Node* &head,int d){
    Node* temp=head;
    Node* nodetoinsert=new Node(d);
    if(head==NULL){
        head=nodetoinsert;
        return;
    }
    while (temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}


void insertAtPos(Node* &head,int pos,int data){
    Node* temp=head;
    Node* nodetoinsert=new Node(data);
    if(pos<=1){
        insertAtHead(head,data);
        return;
    }else{
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    if (temp == NULL) {
        insertAtLast(head,data);
        return;
    }
    nodetoinsert->next = temp->next;
    nodetoinsert->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = nodetoinsert;
    }
    temp->next = nodetoinsert;
    }
}

void deletepos(Node* &head,int pos){
    if (head == nullptr) {
        return;
    }
    Node* temp=head;
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return;
    }
    for(int i=0;i<pos-2 ;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    if (temp->next != NULL) {
        temp->next->prev = temp;
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
    Node n(3);
    Node* head=&n;
    insertAtHead(head,1);
    insertAtHead(head,4);
    insertAtLast(head,5);
    insertAtLast(head,99);
    insertAtPos(head,3,76);
    print(head);
    deletepos(head,3);
    print(head);
}