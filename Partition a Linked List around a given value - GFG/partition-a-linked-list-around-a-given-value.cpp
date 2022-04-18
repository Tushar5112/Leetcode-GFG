// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
    Node* ptr = head;
   vector<int> a, b, c;
   while(ptr) {
       if(ptr->data < x) a.push_back(ptr->data);
       if(ptr->data == x) b.push_back(ptr->data);
       if(ptr->data > x) c.push_back(ptr->data);
       ptr = ptr->next;
   }
   
   ptr = head;
   int i = 0, n = a.size();
   while(ptr && i < n) {
       ptr->data = a[i];
       i++;
       ptr = ptr->next;
   }
   n = b.size();
   i = 0;
   while(ptr && i < n) {
       ptr->data = b[i];
       i++;
       ptr = ptr->next;
   }
   n = c.size();
   i = 0;
   while(ptr != NULL && i < n) {
       ptr->data = c[i];
       i++;
       ptr = ptr->next;
   }
   
   
   return head;
}