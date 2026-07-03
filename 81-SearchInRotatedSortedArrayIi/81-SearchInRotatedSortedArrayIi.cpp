// Last updated: 7/3/2026, 10:22:50 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            
            int mid = (low + high) / 2;

            // Target found
            if (nums[mid] == target) {
                return true;
            }

            // Handle duplicates - when we can't determine which half is sorted
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            // Left half is sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;  // target lies in left half
                } else {
                    low = mid + 1;   // search right half
                }
            }
            // Right half is sorted
            else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;   // target lies in right half
                } else {
                    high = mid - 1;  // search left half
                }
            }
        }

        return false;
    }
};