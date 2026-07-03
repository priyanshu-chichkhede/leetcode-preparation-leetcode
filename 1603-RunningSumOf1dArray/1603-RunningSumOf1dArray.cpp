// Last updated: 7/3/2026, 10:22:16 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};