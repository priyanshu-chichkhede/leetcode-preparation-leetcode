// Last updated: 8/10/2026, 8:10:20 PM
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
14    int height(TreeNode* root) {
15        if(root == NULL)
16            return 0;
17
18        int left = height(root->left);
19        int right = height(root->right);
20
21        return 1 + max(left, right);
22    }
23
24    bool isBalanced(TreeNode* root) {
25        if(root == NULL)
26            return true;
27
28        if(abs(height(root->left) - height(root->right)) > 1)
29            return false;
30
31        return isBalanced(root->left) && isBalanced(root->right);
32    }
33};