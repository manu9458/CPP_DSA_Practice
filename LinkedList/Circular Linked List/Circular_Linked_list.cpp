//
// Created by Manu on 5/27/2025.
//
//Circular linked list//
//Circular linked list//
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

//Print Node//
void PrintNode(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

// Insert at begin//
Node *insertAtBegin(Node *head, int data){
    Node *temp = new Node(data);
    Node *curr = head;
    if(head == NULL){
        temp ->next = temp;
        return temp;
    }
    else{
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return temp;
    }
}

//delete first node//
Node *deleteFirstNode(Node *head){
    Node *curr = head;
    Node *temp = head->next;
    if(head == NULL){
        return NULL;
    }
    if(head->next == head){
        delete(head);
        return NULL;
    }
    while(curr->next != head){
        curr=curr->next;
    }
    curr->next = temp;
    delete(head);
    return temp;
}

// Delete Node From the last//
Node *deleteAtLast(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == head ){
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != head){
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = head;
    return head;
}
int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    head  = insertAtBegin(head, 60);
    head = deleteFirstNode(head);
    head = deleteAtLast(head);
    PrintNode(head);
}