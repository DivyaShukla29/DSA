#include <iostream>
using namespace std;

class Node {
    public:
    Node * next;
    int data;

    Node (int x){
        this ->next = NULL;
        this ->data = x;
    }
    ~Node (){
        int value = this ->data;
        if (this ->next != NULL){
            delete next; // Recursive deletion gets called
            this ->next = NULL;
        }
        cout <<"Node with value " << value << " has been deleted"<<endl;
        
    }
};

void InsertAtHead (Node * &head, int x){
 Node *temp = new Node(x);
 temp ->next = head;
 head = temp;
 return;
}

void InsertAtTail (Node* &tail, int x){
Node *temp = new Node(x);
tail-> next = temp;
tail = temp;
return;
}

void InsertAtAnyPos(Node* &head, Node* &tail, int pos, int x){
if (pos ==1){
    InsertAtHead(head,x);
    return;
}

Node *temp = head;
int cnt = 1;
while (cnt <pos-1){
    temp = temp ->next;
    cnt++;   
}
if (temp ->next == NULL){
    InsertAtTail(tail, x);
}
else {
Node *n = new Node(x);
n->next = temp->next;
temp->next = n;
}
}


void printLL (Node* &head, Node* &tail){
    if (head == NULL){
        cout << "The list is empty" <<endl;
    }
  Node * temp = head;
  while (temp!= NULL){
    cout << temp->data << endl;
    temp = temp ->next;
  }
  cout << "Head" << head ->data <<endl;
  cout <<"Tail" << tail -> data << endl;
}

void DeleteNode (Node* &head, Node* &tail,int pos){
    Node * temp = head;
    if (pos ==1){
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
    Node* curr = head;
       int cnt =1;
       while (cnt < pos){
        prev = curr;
        curr = curr->next;
        cnt++; 
       }
       if (curr -> next == NULL){
        tail = prev;
       }
       prev->next = curr ->next;
       curr ->next = NULL;
       delete curr;

    }

    
}

int main(){

    Node* node1 = new Node (10);

    Node* head = node1;
    Node* tail = node1;

InsertAtTail(tail,20);
InsertAtTail (tail, 30);
InsertAtTail (tail, 40);
InsertAtAnyPos(head, tail, 4, 35);


DeleteNode(head, tail, 5);

printLL (head, tail);
return 0;

}

