// Last updated: 7/3/2026, 10:22:33 PM
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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;  // save even's start

        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;   // odd skips even node
            odd = odd->next;          // move odd forward

            even->next = odd->next;   // even skips odd node
            even = even->next;        // move even forward
        }

        odd->next = evenHead;  // connect odd chain to even chain
        return head;
    }
};