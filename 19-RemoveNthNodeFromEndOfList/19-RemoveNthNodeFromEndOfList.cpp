// Last updated: 7/4/2026, 4:38:40 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL)
            return NULL;

        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast becomes NULL, delete the head when the list has the 5 elements and 5 is n 
        //Move N - 1 times → you reach the last node. Move N times → you reach NULL.
        if (fast == NULL) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Move both pointers
        while (fast!=NULL && fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the nth node from the end
        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;

        return head;
    }
};