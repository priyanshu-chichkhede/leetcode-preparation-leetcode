// Last updated: 8/12/2026, 10:12:15 PM
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
14    int widthOfBinaryTree(TreeNode* root) {
15        if (root == NULL) {
16            return 0;
17        }
18
19        queue<pair<TreeNode*, long long>> q;
20        q.push({root, 0});
21
22        int maxWidth = 0;
23
24        while (!q.empty()) {
25            long long startIdx = q.front().second;
26            long long endIdx = q.back().second;
27
28            int currSize = q.size();
29
30            maxWidth = max(maxWidth, (int)(endIdx - startIdx + 1));
31
32            for (int i = 0; i < currSize; i++) {
33                auto curr = q.front();
34                q.pop();
35
36                long long currIdx = curr.second - startIdx;
37
38                if (curr.first->left) {
39                    q.push({curr.first->left, currIdx * 2 + 1});
40                }
41
42                if (curr.first->right) {
43                    q.push({curr.first->right, currIdx * 2 + 2});
44                }
45            }
46        }
47
48        return maxWidth;
49    }
50};