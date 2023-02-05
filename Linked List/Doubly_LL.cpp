#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data = 0;
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

};

void insertAtHead(Node* &head,int d){

    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
    }
    else{
    Node* newNode = new Node(d);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
    }
}

void insertAtTail(Node* &head , int d){
    Node* newNode = new Node(d);
    Node* curr = head;
    while(curr -> next != NULL){
        curr = curr->next;
    }
    curr -> next = newNode;
    newNode -> prev = curr;
    newNode -> next = NULL;
}

void insertAtPosition(Node* &head, int d,int pos){
    Node* temp = head;
    Node* newNode = new Node(d);

    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    int c = 0;
    while(temp != NULL){
        temp = temp -> next;
        c++;
    }
    if(c == pos){
        insertAtTail(head,d);
        return;
    }
    temp = head;
    while(pos>2){
        temp = temp -> next;
        pos--;
    }
    
    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    newNode -> prev = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<"  "<<temp -> data;
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* A = new Node(45);
    insertAtHead(A,46);
    insertAtTail(A,47);
    print(A);
    insertAtHead(A,44);
    insertAtTail(A,48);
    insertAtPosition(A,57,3);
    insertAtPosition(A,67,6);
    print(A);
}