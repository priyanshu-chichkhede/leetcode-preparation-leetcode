// Last updated: 8/19/2026, 2:42:29 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* prev=NULL;
15    TreeNode* first=NULL;
16    TreeNode* second=NULL;
17    void inorder(TreeNode* root){
18        if(root==NULL){
19            return;
20        }
21        inorder(root->left);
22        if(prev!=NULL and prev->val>root->val){
23            if(first==NULL){
24                first=prev;
25            }
26            second=root;
27        }
28        prev=root;//iterating forward
29        inorder(root->right);
30
31
32    }
33    void recoverTree(TreeNode* root) {
34        inorder(root);
35            int temp=first->val;
36            first->val=second->val;
37            second->val=temp;
38    }
39};