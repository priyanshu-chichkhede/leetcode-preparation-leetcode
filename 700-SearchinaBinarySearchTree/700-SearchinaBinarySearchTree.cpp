// Last updated: 8/14/2026, 1:10:45 AM
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
14    bool check(TreeNode* root, long long minVal, long long maxVal) {
15        if(root == NULL) {
16            return true;
17        }
18
19        if(root->val <= minVal || root->val >= maxVal) {
20            return false;
21        }
22
23        bool left = check(root->left, minVal, root->val);
24        bool right = check(root->right, root->val, maxVal);
25
26        return left && right;
27    }
28
29    bool isValidBST(TreeNode* root) {
30        return check(root, LLONG_MIN, LLONG_MAX);
31    }
32};