// Last updated: 7/7/2026, 2:40:02 AM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        //use ordered map when u need keys and values in order
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
            //here we check for count as we have duplicate values as well so we only 
            //decrease the count and check again as per 
        }
        for(int i=0;i<nums2.size();i++){
            if(mpp.find(nums2[i]) != mpp.end() && mpp[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                mpp[nums2[i]]--;   
            }
            // if the count is 0 the map would still check it and send but if it is 0 then there is
            //no need of that as per so we check whether the count is greater than 0 as a must 
            //condition
        }
        return ans;
        
    }
};