// Last updated: 8/16/2026, 5:28:28 PM
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
14
15    void insert(TreeNode*& root, int val) {
16        if(root == NULL) {
17            root = new TreeNode(val);
18            return;
19        }
20
21        if(val > root->val) {
22            insert(root->right, val);
23        }
24        else {
25            insert(root->left, val);
26        }
27    }
28
29    TreeNode* bstFromPreorder(vector<int>& preorder) {
30        TreeNode* root = new TreeNode(preorder[0]);
31
32        for(int i = 1; i < preorder.size(); i++) {
33            insert(root, preorder[i]);
34        }
35
36        return root;
37    }
38};