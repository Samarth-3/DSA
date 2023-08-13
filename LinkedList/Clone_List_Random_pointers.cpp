//aprroch 3
//without using hashmaps
class Solution
{   
    private:
    void inserttail(Node* &head,Node* &tail,int d){
        Node* clone=new Node(d);
        if(head==NULL){
            head=clone;
            tail=clone;
        }
        else{
            tail->next=clone;
            tail=clone;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //creating a new list
        Node* clonehead=NULL;
        Node* clonetail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            inserttail(clonehead,clonetail,temp->data);
            temp=temp->next;
        }
        //linking
        Node* orinode=head;
        Node* clonenode=clonehead;
        while(orinode!=NULL){
                // Save the next pointers of both original and clone nodes
        Node* next_original = orinode->next;
        Node* next_clone = clonenode->next;

    // Link the original node to its clone
        orinode->next = clonenode;
    
    // Link the clone node to its original's next node
        clonenode->next = next_original;

    // Move to the next nodes in both original and clone lists
        orinode = next_original;
        clonenode = next_clone;

        }
        
        
        //correct pos of random pointers
        orinode=head;
        
        while(orinode!=NULL){
            clonenode=orinode->next;
            if (orinode->arb != NULL) {
                clonenode->arb = orinode->arb->next;
            }
            orinode = clonenode->next;
        }
        
        //delinking
        orinode=head;
        clonenode=clonehead;
        while(orinode!=NULL ){
            orinode->next=clonenode->next;
            orinode=orinode->next;
            if(orinode!=NULL){
                clonenode->next=orinode->next;
            }
            clonenode=clonenode->next;
        }
        return clonehead;
    }
};