// Last updated: 8/10/2026, 4:25:17 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root == NULL){
14            return NULL;
15        }
16
17        if(root == p || root == q){
18            return root;
19        }
20
21        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
22        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);
23
24        if(leftLCA != NULL && rightLCA != NULL){
25            return root;
26        }
27        else if(leftLCA != NULL){
28            return leftLCA;
29        }
30        else{
31            return rightLCA;
32        }
33    }
34};