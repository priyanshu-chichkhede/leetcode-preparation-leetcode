// Last updated: 7/3/2026, 10:22:37 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int count = 0;

            for(int j = 0; j < n; j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }

            if(count > n / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};