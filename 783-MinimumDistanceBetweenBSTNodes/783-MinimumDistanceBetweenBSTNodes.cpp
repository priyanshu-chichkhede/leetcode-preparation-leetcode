// Last updated: 8/15/2026, 2:34:26 PM
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
14    vector<int> ans;
15
16    void inorder(TreeNode* root) {
17        if (root == NULL) {
18            return;
19        }
20
21        inorder(root->left);
22        ans.push_back(root->val);
23        inorder(root->right);
24    }
25
26    int minDiffInBST(TreeNode* root) {
27        inorder(root);
28
29        int mini = INT_MAX;
30
31        for (int i = 0; i < ans.size() - 1; i++) {
32            int h = ans[i + 1] - ans[i];
33            mini = min(h, mini);
34        }
35
36        return mini;
37    }
38};