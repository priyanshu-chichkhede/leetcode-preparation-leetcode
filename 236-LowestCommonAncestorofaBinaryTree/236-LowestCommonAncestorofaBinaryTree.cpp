// Last updated: 8/10/2026, 7:59:48 PM
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
14    bool mirror(TreeNode* right,TreeNode* left){
15       
16        if(left==NULL and right==NULL){
17            return true;
18        }
19        if(left==NULL or right==NULL){
20            return false;
21        }
22        if(left->val!=right->val){
23            return false;
24        }
25        return mirror(left->left,right->right)and
26        mirror(left->right,right->left);
27    }
28    bool isSymmetric(TreeNode* root) {
29        if(root==NULL){
30            return true;
31        }
32     
33        return mirror(root->left,root->right);
34    }
35};