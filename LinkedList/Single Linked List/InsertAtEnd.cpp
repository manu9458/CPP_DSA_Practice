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

Node *insertAtEnd(Node *head, int data) {
    Node *curr = head;
    Node *temp = new Node(data);
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insertAtEnd(head, 50);
    head = insertAtEnd(head, 60);
    PrintNode(head);
}

