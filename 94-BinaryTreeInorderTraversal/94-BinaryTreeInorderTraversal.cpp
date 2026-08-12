// Last updated: 8/12/2026, 11:59:23 PM
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
14    void inorder(TreeNode* root, vector<int>& v) {
15        if(root == NULL) {
16            return;
17        }
18
19        inorder(root->left, v);
20
21        v.push_back(root->val);
22
23        inorder(root->right, v);
24    }
25
26    vector<int> inorderTraversal(TreeNode* root) {
27        vector<int> v;
28        inorder(root, v);
29        return v;
30    }
31};