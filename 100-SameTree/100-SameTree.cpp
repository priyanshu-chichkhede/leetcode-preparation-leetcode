// Last updated: 8/9/2026, 3:44:49 PM
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
14    bool isIdentical(TreeNode* p, TreeNode* q){
15        if(p==NULL || q==NULL){
16            return p==q;
17
18        }
19        return p->val==q->val && isIdentical( p->left,q->left)
20            and isIdentical( p->right, q->right);  
21    }
22    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
23        //base case
24        if(root==NULL || subRoot==NULL){
25            return root==subRoot;
26            //same if else condition where we just check if
27            //equal then true and not equal then not true
28        }
29        if(root->val==subRoot->val and isIdentical(root,subRoot) ){
30            return true;
31        }
32        return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
33    } 
34};