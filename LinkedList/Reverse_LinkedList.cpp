LinkedListNode<int>* reverseLinkedList(LinkedListNode<int>* head) {
    LinkedListNode<int>* prev = nullptr;
    LinkedListNode<int>* curr = head;

    while (curr != nullptr) {
        LinkedListNode<int>* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}