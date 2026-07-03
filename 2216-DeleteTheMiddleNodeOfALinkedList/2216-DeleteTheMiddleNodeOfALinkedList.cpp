// Last updated: 7/3/2026, 10:22:15 PM
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        //edge case of one head or no head 
        ListNode*temp=head;
        ListNode*prev=NULL;
        int count=0;
       //find the length of the list and PUT THE TEMP ON ORIGINAL POSITION OF HEAD 
       //TEMP=HEAD  the starting position of list 
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        int mid= count/2 ;
        for(int i=0;i<mid;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        return head;
        
    }
};