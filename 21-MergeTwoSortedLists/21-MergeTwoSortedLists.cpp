// Last updated: 7/5/2026, 8:00:40 PM
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> mpp;
5        //use ordered map when u need keys and values in order
6        vector<int> ans;
7        for(int i=0;i<nums1.size();i++){
8            mpp[nums1[i]]++;
9        }
10        for(int i=0;i<nums2.size();i++){
11            if(mpp.find(nums2[i]) != mpp.end() && mpp[nums2[i]] > 0){
12                ans.push_back(nums2[i]);
13                mpp[nums2[i]]--;   
14            }
15            
16        }
17        return ans;
18        
19    }
20};