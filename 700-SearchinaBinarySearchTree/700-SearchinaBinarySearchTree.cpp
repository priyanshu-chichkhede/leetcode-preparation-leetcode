// Last updated: 8/14/2026, 12:48:00 AM
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
14    TreeNode* helper(vector<int>& nums,int st,int end){
15        if(st>end){
16            return NULL;
17        }
18        int mid=(st+end)/2;
19        TreeNode* root= new TreeNode(nums[mid]);
20        root->left=helper(nums,st,mid-1);
21        root->right=helper(nums,mid+1,end);
22        return root;
23    }
24    TreeNode* sortedArrayToBST(vector<int>& nums) {
25       return helper(nums,0,nums.size()-1);
26    }
27};