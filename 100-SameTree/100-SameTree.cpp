// Last updated: 8/9/2026, 6:06:11 PM
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
14    // int height(TreeNode*root){
15    //     if(root==NULL){
16    //         return 0;
17    //     }
18    //     int leftSide=height(root->left);
19    //     int rightSide=height(root->right);
20    //     return max(leftSide,rightSide)+1;
21    // }
22    // int diameterOfBinaryTree(TreeNode* root) {
23    //     if(root == NULL) {
24    //         return 0;
25    //                     }
26    //     int leftRoot=diameterOfBinaryTree(root->left);
27    //     int rightRoot=diameterOfBinaryTree(root->right);
28    //     int currRoot=height(root->left)+height(root->right);
29    //     return max({leftRoot, rightRoot, currRoot});
30    //     //O(n^2)time complexity hai isme
31        int ans=0;
32        int height(TreeNode*root){
33        if(root==NULL){
34            return 0;
35        }
36        int leftSide=height(root->left);
37        int rightSide=height(root->right);
38        ans=max(ans,leftSide+rightSide);
39        return max(leftSide,rightSide)+1;
40    }
41    int diameterOfBinaryTree(TreeNode* root) {
42            height(root);
43            return ans;
44    }
45    };
46