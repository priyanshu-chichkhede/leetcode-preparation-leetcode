// Last updated: 7/4/2026, 4:38:24 PM
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* next = curr->next;
            //here we use two pointer of prev and next and so we keep moving forward with the temp with using prev and next as per we break the link of temp of next to prev and move the temp and prev forward
            // we dont use temp=temp->next as we have already linked it to the prev node so using it to traverse further is futile 

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }
};