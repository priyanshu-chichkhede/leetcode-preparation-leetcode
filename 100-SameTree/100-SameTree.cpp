// Last updated: 8/9/2026, 1:37:35 AM
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
14    bool isSameTree(TreeNode* p, TreeNode* q) {
15        if(p==NULL || q==NULL){
16            return p==q;
17        }
18      bool sameLeft=isSameTree(p->left, q->left);
19      bool sameRight=isSameTree(p->right, q->right);  
20      return sameLeft and sameRight and p->val==q->val;
21    }
22};