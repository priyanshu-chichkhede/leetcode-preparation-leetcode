// Last updated: 8/17/2026, 3:54:26 PM
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
14    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
15
16        if(root1 == NULL)
17            return root2;
18
19        if(root2 == NULL)
20            return root1;
21
22        root1->val = root1->val + root2->val;
23
24        root1->left = mergeTrees(root1->left, root2->left);
25        root1->right = mergeTrees(root1->right, root2->right);
26
27        return root1;
28    }
29};