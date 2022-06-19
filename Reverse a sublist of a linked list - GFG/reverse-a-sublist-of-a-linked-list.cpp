// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node*reverse(Node*curr)
   {
       Node*nex,*prev=NULL;
       
       while(curr)
       {
           nex=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nex;
       }
       
       return prev;
   }
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
      if(m==n)
      return head;
      
      if(!head->next)
      return head;
      
      
      if( head->next and !head->next->next)
      {
          return reverse(head);
      }
      Node*curr=head,*prev=NULL,*p1,*p2,*p3,*p4;
      p1=p2=p3=p4=NULL;
      
      int c=1;
      
      while(curr)
      {
          if(m==c)
          {   
              p1=prev;
              p2=curr;
          }
          
          if(n==c)
          {
              p3=curr;
              p4=curr->next;
          }
          
          prev=curr;
          curr=curr->next;
          c++;
      }
      
      
      if(p1)
      p1->next=NULL;
      
      
      p3->next=NULL;
      
      Node*t=reverse(p2);
      
      if(p1)
       p1->next=t;
      else
       head=t;
      
      p2->next=p4; 
       
      return head;
   }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends