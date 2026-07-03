// Last updated: 7/3/2026, 10:22:56 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};