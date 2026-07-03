// Last updated: 7/3/2026, 10:22:52 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            if(sum > maxi) {
                maxi = sum;
            }

            if(sum < 0) {
                sum = 0;
            }
        }

        return maxi;
    }
};