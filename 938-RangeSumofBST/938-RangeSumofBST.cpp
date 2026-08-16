// Last updated: 8/16/2026, 4:20:31 PM
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
14    int rangeSumBST(TreeNode* root, int low, int high) {
15        if(root==NULL){
16            return 0;
17        }
18        if(low>root->val and high>root->val){
19          return rangeSumBST(root->right,low,high);
20        }
21        else if(high<root->val and low<root->val){
22            return rangeSumBST(root->left,low,high);
23        }
24        else{
25            return root->val+rangeSumBST(root->left,low,high)+
26            rangeSumBST(root->right,low,high);
27        }
28        return 0;
29    }
30};