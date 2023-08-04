Node* reverseDLL(Node* head)
{   
    if(head->next==NULL){
        return head;
    }   
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        curr->prev=forward;
        prev=curr;
        curr=forward;
    }
    delete curr;
    return prev;
}