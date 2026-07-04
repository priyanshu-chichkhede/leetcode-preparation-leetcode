// Last updated: 7/4/2026, 4:38:08 PM
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        //we put the two pointer fast and slow and we shift slow to one step at a time 
        //and fast to two step at a time of the given pointer 
        //till the fast is not null and next value of fast is not null only then we would know
        //as if it is null then end of it and next value given is null then last value of the list 
        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};