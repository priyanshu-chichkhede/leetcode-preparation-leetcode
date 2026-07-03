// Last updated: 7/3/2026, 10:22:47 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int longest = 1;
        int count = 0;
        int smaller = INT_MIN;

        for(int i = 0; i < n; i++) {
//count for the consecutive number if the previous number is equal to given then the the numbers are consecutive and they are in order
            if(nums[i] - 1 == smaller) {
                count++;
                smaller = nums[i];
            }
            //if a new number appears then what we do is like put the count as 1 and start from the beginning as per
            else if(nums[i] != smaller) {
                count = 1;
                smaller = nums[i];
            }

            longest = max(longest, count);
        }

        return longest;
    }
};