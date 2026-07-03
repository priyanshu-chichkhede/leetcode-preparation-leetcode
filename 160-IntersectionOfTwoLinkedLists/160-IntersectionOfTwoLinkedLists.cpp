// Last updated: 7/3/2026, 10:22:39 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> mpp;
        ListNode*temp=headA;
        //store all the values of the first list and then 
        while(temp!=NULL){
            mpp[temp]=1;
            temp=temp->next;

        }
        //start the traversal with the second list and then check the common
        //node not the value{as value can be same as well} through which we can find common intersection
        temp=headB;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    
    }
};
//a trick to take
//TO RETURN VALUE WE NEED TO TAKE A LOOK AT THE FUNCTION NAME IF VOID NO RETURN NODE THEN NULL AND OTHER ARE PROVIDED IN THE QUESTION 