#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        head->data = temp->data;
        head->next = NULL;
    }
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, int data)
{
    Node* temp = head;
    Node* newNode = new Node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp -> next = newNode;
    newNode->next = NULL;
}

void insertAtPosition(Node* &head, int data ,int pos){
    Node* temp = head;
    Node* newNode = new Node(data);
    if(pos == 1)
        insertAtHead(head,data);
        int i = 2;
    while(temp != NULL){
        
        if(i == pos)
        break;
        temp = temp -> next;
        i++;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* Reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    if(head == NULL || head -> next == NULL)
    return head;
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main(){
    Node* A = new Node(44);
    insertAtTail(A,45);
    insertAtTail(A,46);
    insertAtTail(A,47);
    insertAtTail(A,48);
    insertAtTail(A,49);
    print(A);
    Node* temp = Reverse(A);
    print(temp);
}