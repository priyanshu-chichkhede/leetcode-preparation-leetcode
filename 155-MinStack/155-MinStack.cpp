// Last updated: 8/5/2026, 11:26:25 PM
1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        //BRUTE FORCE APPROACH
5        // vector<int> ans;
6        // vector<int> main;
7        // int n=nums.size();
8        // for(int i=0;i<n;i++){
9        //     ans.push_back(nums[i]);
10        // }
11        // for(int i=0;i<n;i++){
12        //     ans.push_back(nums[i]);
13        // }
14        // for(int i=0;i<ans.size()/2;i++){
15            
16        //     for(int j=i+1;j<ans.size();j++){
17        //         if(ans[j]>ans[i]){
18        //             main.push_back(ans[j]);
19        //             break;
20        //         }
21        //         if(j==ans.size()-1){
22        //             main.push_back(-1);
23        //         }
24               
25        //     }
26        // }
27        // return main;
28        // int n=nums.size();
29        // vector<int> ans;
30        // stack<int> st;
31        // for(int i= 2*n-1;i>=0;i--){
32        //     while(st.size()>0 && nums[st.top()]<=nums[i%n]){
33        //         st.pop();
34        //     }
35        // if (i < n)//prepare the stack till the actual like array not the duplicate array comes  {
36        //         if (st.empty()) {
37        //             ans.push_back(-1);
38        //         } else {
39        //             ans.push_back(nums[st.top()]);
40        //         }
41        //     }
42        //     st.push(i%n);
43
44        // }
45        // reverse(ans.begin(), ans.end());
46        // return ans;
47
48        int n = nums.size();
49        vector<int> ans(n, -1);
50        stack<int> st;
51
52        for (int i = 2 * n - 1; i >= 0; i--) {
53
54            while (!st.empty() && nums[st.top()] <= nums[i % n]) {
55                st.pop();
56            }
57
58            if (!st.empty()) {
59                ans[i % n] = nums[st.top()];
60            }
61
62            st.push(i % n);
63        }
64
65        return ans;
66    }
67};