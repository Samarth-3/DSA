Node* removeDuplicates(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* temp = head;
    while (temp != NULL) {
        Node* prev = temp;
        Node* curr = temp->next;
        while (curr != NULL) {
            if (temp->data == curr->data) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        temp = temp->next;
    }
    return head;
}