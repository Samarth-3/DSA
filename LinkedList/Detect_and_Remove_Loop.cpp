/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* loopExist(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* startLoop(Node* head){
    Node* temp=loopExist(head);
    if(temp==NULL){return NULL;}
    Node* temp1=head;
    while(temp!=temp1){
        temp=temp->next;
        temp1=temp1->next;
    }
    return temp;
}
Node *removeLoop(Node *head)
{
    Node* del=startLoop(head);
    if(del==NULL){
        return head;
    }
    Node* tmp=del;
    while(del->next!=tmp){
        del=del->next;
    }
    del->next=NULL;
    return head;
    
}

//codestudio