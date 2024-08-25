#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};
void InsertAtHead(Node *&head, int d){
    Node *temp = new Node(d);
    temp->next = head->next;
    head = temp;
}
void InsertAtTail (Node * &tail , int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
        
    }
}

void insertAtPos(Node *&head,Node *&tail, int pos, int d){
// if the user wants to add a node to the beg of the linked list.
if(pos ==1){
    InsertAtHead(head, d);
    return;
}
    int cnt = 1;
    Node *n = new Node(d);
    Node *temp = head;
    while (cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    // if the user adds the node to the end of the linked list.
    if(temp->next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    n->next = temp->next;
    temp->next = n;
}


int main (){
    Node *node1  = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    InsertAtTail(tail, 20);
    InsertAtTail(tail, 30);
    InsertAtTail(tail, 40);
    insertAtPos(head,tail, 5, 50);
    print(head);
}