// Last updated: 8/5/2026, 10:50:42 PM
1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        vector<int> ans;
5        vector<int> main;
6        int n=nums.size();
7        for(int i=0;i<n;i++){
8            ans.push_back(nums[i]);
9        }
10        for(int i=0;i<n;i++){
11            ans.push_back(nums[i]);
12        }
13        for(int i=0;i<ans.size()/2;i++){
14            
15            for(int j=i+1;j<ans.size();j++){
16                if(ans[j]>ans[i]){
17                    main.push_back(ans[j]);
18                    break;
19                }
20                if(j==ans.size()-1){
21                    main.push_back(-1);
22                }
23               
24            }
25        }
26        return main;
27    }
28};