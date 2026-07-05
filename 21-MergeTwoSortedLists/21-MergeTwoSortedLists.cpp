// Last updated: 7/5/2026, 8:11:35 PM
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> mpp;
5        //use ordered map when u need keys and values in order
6        vector<int> ans;
7        for(int i=0;i<nums1.size();i++){
8            mpp[nums1[i]]++;
9            //here we check for count as we have duplicate values as well so we only 
10            //decrease the count and check again as per 
11        }
12        for(int i=0;i<nums2.size();i++){
13            if(mpp.find(nums2[i]) != mpp.end() && mpp[nums2[i]] > 0){
14                ans.push_back(nums2[i]);
15                mpp[nums2[i]]--;   
16            }
17            // if the count is 0 the map would still check it and send but if it is 0 then there is
18            //no need of that as per so we check whether the count is greater than 0 as a must 
19            //condition
20        }
21        return ans;
22        
23    }
24};