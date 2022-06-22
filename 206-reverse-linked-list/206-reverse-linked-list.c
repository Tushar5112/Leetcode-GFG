/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(!head)
    {
        return NULL;
    }
    struct ListNode *next_node,*prev_node = NULL;
    while(head)
    {
        next_node = head->next;
        head->next = prev_node;
        prev_node = head;
        head = next_node; 
    }
    return prev_node;
}