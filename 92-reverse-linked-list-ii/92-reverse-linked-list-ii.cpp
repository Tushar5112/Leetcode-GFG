/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *curr = head, *sentinel = new ListNode(0, head);
        ListNode *prev = sentinel, *flip_start = nullptr, *flip_end = nullptr, *flip_start_prev = nullptr;
        int l = 1;
        int r = 1;
        
        while(curr != nullptr) {
            auto next = curr->next;
            
            if(l == left) {
                flip_start = curr;
                flip_start_prev = prev;
            }
            
            if(flip_start != nullptr && flip_start != curr) {
                curr->next = prev;
            }
            
            if(r == right) {
                flip_start->next = next;
                flip_start_prev->next = curr;
                break;
            }
            
            prev = curr;
            curr = next;
            ++l; ++r;
        }
        
        return sentinel->next;
    }
};