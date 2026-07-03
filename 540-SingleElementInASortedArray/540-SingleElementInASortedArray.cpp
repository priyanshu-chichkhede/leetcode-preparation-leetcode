// Last updated: 7/3/2026, 10:22:29 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) { 
        int n = nums.size();
        
        // edge cases
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1, high = n-2;  // ✅ skip edges

        while(low <= high){
            int mid = (low + high) / 2;
            // we follow a even odd pair so like according to which we check 

            if(mid % 2 == 1){// odd so we check before as (even,odd)
                if(nums[mid] == nums[mid-1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            else{//similar to that part but difference is +2 as we need new pair not same value of this pair 
                if(nums[mid] == nums[mid+1])
                    low = mid + 2;
                else
                    high = mid - 1;
            }
        }
        return nums[low];
    }
};