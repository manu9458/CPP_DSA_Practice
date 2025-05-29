//
// Created by Manu on 5/29/2025.
//
//
// Created by Manu on 5/29/2025.
//
#include<iostream>
using namespace std;
/**
 * @struct Node
 * @brief Represents a node in a singly linked list.
 *
 * This structure is used to create nodes for singly linked lists.
 * Each node contains an integer data field and a pointer to the
 * next node in the list.
 */
struct Node {
    /**
     * Represents a data value stored in the node structure.
     * Used as the primary data member in various linked list implementations.
     */
    int data;
    /**
     * Pointer to the next Node in the linked list.
     * Can point to `NULL` if it is the last Node or to another Node,
     * including forming a loop in the linked list.
     */
    Node *next;
    /**
     * @brief Constructs a Node object with the given data value.
     * @param x The integer value to be assigned as the data for the node.
     *
     * This constructor initializes the member variable `data` with the value of `x`
     * and sets the `next` pointer to `NULL`, indicating that the node does not
     * point to any other node by default.
     */
    Node(int x) {
        data = x;
        next = NULL;
    }
};

/**
 * Detects and removes a loop in a linked list.
 *
 * This function checks for the presence of a loop in a singly linked
 * list using Floyd's Cycle Detection Algorithm (Tortoise and Hare).
 * If a loop is detected, it removes the loop and ensures the linked
 * list is properly terminated.
 *
 * @param head Pointer to the head node of the linked list.
 * @return true if a loop was detected and removed, else false.
 */
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

/**
 * Detects if there is a loop in a given linked list.
 *
 * This function uses Floyd's Cycle-Finding algorithm (Tortoise and Hare approach)
 * to determine whether a cycle exists in the linked list. Two pointers, `slow`
 * and `fast`, traverse the list at different speeds. If they meet at some point,
 * it indicates the presence of a loop.
 *
 * @param head A pointer to the head node of the linked list.
 * @return True if a loop exists in the linked list, false otherwise.
 */
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

/**
 * @brief Entry point of the program.
 *
 * The main function creates a linked list with nodes, forms a loop in the linked list,
 * calls functions to detect and remove the loop, and checks for its presence after removal.
 *
 * @return int Program exit status.
 */
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
