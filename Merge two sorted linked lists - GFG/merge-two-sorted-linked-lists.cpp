// { Driver Code Starts
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

/* Driver program to test above function*/
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
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* ptr1 = head1;
   Node* ptr2 = head2;
   Node* dummynode = new Node(-1);
   Node* ptr3 = dummynode;
   while(ptr1 != NULL && ptr2 != NULL ){
       if(ptr1->data < ptr2->data){
           
           ptr3->next = ptr1;
           ptr1 = ptr1->next;
           
       }
       else{
      ptr3->next  = ptr2;
      ptr2= ptr2->next;

       }
       ptr3= ptr3->next;
       }
       while(ptr1 != NULL){
           
           ptr3->next = ptr1;
           ptr1 = ptr1->next;
           ptr3 = ptr3->next;
           
           }
           while(ptr2 != NULL){
           
           ptr3->next = ptr2;
           ptr2 = ptr2->next;
           ptr3 = ptr3->next;
           
           }
           
           return dummynode->next;
    // code here
}  