//
// Created by Manu on 5/27/2025.
//
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

void Print_Node(Node *head) {
    while (head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }

}

/**
 * @brief Reverses a linked list in groups of size k.
 *
 * This function takes the head of a singly linked list and reverses it in
 * groups of size k. If the number of nodes in the list is not a multiple
 * of k, the remaining nodes (less than k) are left as is.
 *
 * @param head Pointer to the head node of the singly linked list.
 * @param k The size of groups within which the linked list should be reversed.
 * @return Pointer to the new head of the modified linked list, which is the
 *         head of the reversed first group.
 *
 * @details
 *   - The function uses an iterative approach to reverse the nodes within
 *     each group of k.
 *   - After processing each group of k nodes, the function recursively
 *     processes the remaining nodes of the list.
 *   - The function ensures that the order of nodes outside the k-sized
 *     chunks remains unchanged.
 */
Node *reverseKSize(Node *head, int k) {
    if (head == NULL) {
        return NULL;
    }
    Node *curr = head;;
    Node *next  = NULL;
    Node *prev = NULL;
    int count =0;
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL) {
        head->next = reverseKSize(next,k);
    }
    return prev;
}
int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);
    head->next->next->next->next->next->next->next = new Node(80);
    head = reverseKSize(head, 3);
    Print_Node(head);
}