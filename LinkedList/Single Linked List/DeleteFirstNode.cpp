//
// Created by Manu on 5/25/2025.
//
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

//Print Nodes//
void PrintNode(Node *head) {
    while (head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *deleteFirstNode(Node *head) {
    Node *curr = head->next;
    delete head;
    return curr;
}

Node *deleteLastNode(Node *head) {
    Node *curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}
int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = deleteFirstNode(head);
    head = deleteLastNode(head);
    PrintNode(head);
}

