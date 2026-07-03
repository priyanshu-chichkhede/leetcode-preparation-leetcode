// Last updated: 7/3/2026, 10:22:38 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // edge cases of array of like 1 and with index of 1 and index of n-1 which is the last one 
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;          //  handles mid-1 crash
        if(nums[n-1] > nums[n-2]) return n-1;    // handles mid+1 crash

        int low = 1, high = n-2;  //  skip first and last element here we already checked the last element of the array so due to which no need to check further 
        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;  //  peak found
            }
            else if(nums[mid] < nums[mid-1]){
                high = mid-1;  // go left
            }
            else{
                low = mid+1;   // go right
            }
        }
        return -1;
    }
};