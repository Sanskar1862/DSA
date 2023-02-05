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

void deleteAtHead(Node* &head){
    Node* temp = head;
    temp = head -> next;
    delete(head);
    head = temp;
}

void deleteAtTail(Node* &head){
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

void deleteAtPosition(Node* &head, int pos){
    
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    int c = 2;
    Node* temp = head;
    Node* prev = head;
    while(temp != NULL){
        temp = temp -> next;
        if(pos == c)
            {
                prev -> next = temp -> next;
                return;
            }
        prev = prev -> next;
        c++;
    }

}
void isCircularList(Node *head){
    Node* temp = head;
    while(temp != NULL){
        if(temp -> next == head){
        cout<<"Circular";
        return;
        }
        temp = temp -> next;
    }
    cout<<"No";
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

int main()
{
    Node *A = new Node(56);
    insertAtHead(A, 45);
    insertAtTail(A,36);
    print(A);
    insertAtPosition(A,48,3);
    print(A);
    deleteAtHead(A);
    print(A);
    deleteAtTail(A);
    print(A);
    insertAtHead(A, 45);
    insertAtTail(A, 36);
    print(A);
    deleteAtPosition(A,4);
    print(A);
    insertAtTail(A, 31);
    insertAtTail(A, 32);
    insertAtTail(A, 33);
    insertAtTail(A, 34);
    insertAtTail(A, 35);
    print(A);
    deleteAtPosition(A,5);
    print(A);
    isCircularList(A);
    return 0;
}