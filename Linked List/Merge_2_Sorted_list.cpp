//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* curr1 = head1;
    Node* curr2 = head2;
    Node* ans = new Node(-1);
    Node* curr3 = ans;  //for traversal of ans 
    
    while(curr1 != NULL and curr2 != NULL){
        if(curr1 -> data < curr2 -> data){
            curr3 -> next =curr1;
            curr1 = curr1 -> next;
        }
        else{
            curr3 -> next = curr2;
            curr2 = curr2 -> next;
        }
        curr3 = curr3 -> next;
    }
    
    while(curr1 != NULL){
        curr3 -> next = curr1;
        curr1 = curr1 -> next;
        curr3 = curr3 -> next;
    }
    while(curr2 != NULL){
        curr3 -> next = curr2;
        curr2 = curr2 -> next;
        curr3 = curr3 -> next;
    }
    
    return ans->next;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}