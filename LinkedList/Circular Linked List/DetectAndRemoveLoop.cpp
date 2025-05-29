//
// Created by Manu on 5/29/2025.
//
//
// Created by Manu on 5/29/2025.
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

bool detectLoopAndRemoveLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    slow = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;

    }
    fast->next = NULL;
}
bool detectLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}
int main() {
    Node *head=new Node(15);
    head->next=new Node(10);
    head->next->next=new Node(12);
    head->next->next->next=new Node(20);
    head->next->next->next->next=head->next;
    detectLoopAndRemoveLoop(head);
    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;

}
