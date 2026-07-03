// Last updated: 7/3/2026, 10:22:55 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Left half is sorted
            if (nums[low] <= nums[mid])//check whether the left half is sorted or not  
            {
                if (nums[low] <= target && target <= nums[mid]) {//check whether the target is on the left side 
                    high = mid - 1;  // target in left half
                } else {
                    low = mid + 1;   // search right
                }
            }
            // Right half is sorted 
            else {
                if (nums[mid] <= target && target <= nums[high]) {//check whether the target is on the right side 
                    low = mid + 1;   // target in right half
                } else {
                    high = mid - 1;  // search left
                }
            }
        }
        return -1;
    }
};