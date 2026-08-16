// Last updated: 8/16/2026, 3:57:10 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        if(root==NULL){
15            return NULL;
16        }
17
18        if(p->val<root->val and q->val<root->val){
19        return lowestCommonAncestor(root->left,p,q);
20        }
21        else if(p->val>root->val and q->val>root->val){
22        return lowestCommonAncestor(root->right,p,q);}
23        else{
24            return root;
25        }
26        return NULL;
27    }
28};