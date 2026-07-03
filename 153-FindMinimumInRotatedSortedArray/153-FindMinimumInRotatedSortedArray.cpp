// Last updated: 7/3/2026, 10:22:42 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int mini = INT_MAX;  // ✅ start with largest possible value

        while (low <= high) {
            int mid = (low + high) / 2;

            // Left half is sorted
            if (nums[low] <= nums[mid]) {// we check the sorted part and find the minimum of it then check the right side so that there might be a minimum number on the right side to check that 
                mini = min(mini, nums[low]);  // ✅ minimum is at nums[low]
                low = mid + 1;               // go right to find rotation
            }
            // Right half is sorted considering both condition if right sorted taking the minimum of the right side and moving the array to left as there might be a minimum no. and comparing that
            //right side sorted then go to left and vice versa 
            else {
                mini = min(mini, nums[mid]);  // ✅ minimum is at nums[mid]
                high = mid - 1;              // go left to find rotation
            }
        }
        return mini;
    }
};