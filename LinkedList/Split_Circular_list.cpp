#include <bits/stdc++.h> 
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/ 
Node* insertAtTail(Node* list, Node* temp) {
    if (!list) {
        list = temp;
        temp->next = list;
    } else {
        Node* curr = list;
        while (curr->next != list) {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = list;
    }
    return list;
}

void splitCircularList(Node* head) {
    if (!head) return;

    Node* temp = head;
    int count = 0;
    do {
        temp = temp->next;
        count++;
    } while (temp != head);

    temp = head;
    Node* l1 = nullptr;
    Node* l2 = nullptr;
    int count1 = count / 2;

    while (count1 > 0) {
        Node* nextTemp = temp->next;
        l1 = insertAtTail(l1, temp);
        temp = nextTemp;
        count1--;
    }

    while (temp != head) {
        Node *nextTemp = temp->next;
        l2 = insertAtTail(l2, temp);
        temp = nextTemp;
    }
}