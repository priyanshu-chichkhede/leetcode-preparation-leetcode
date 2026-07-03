// Last updated: 7/3/2026, 10:22:41 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
       int n= nums.size();
       int low=0,high=n-1;
       int mini=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            //we do this as the case where the high low and mid are equal then 
            //we need to increase the low and high a case in duplicate number 
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                mini=min(mini,nums[low]);// if all are duplicates then if we dont save it so we will get int max as answer rather than min 
                low++;
                high--;
                continue; // we use continue to go back to top of loop so mid recalculates freshly
// without it mid stays stale and next if block runs with old mid value giving wrong results
            }
            //if array is sorted in the left find the minimum and check that with the value in the right side of the part 
            if(nums[low]<=nums[mid]){ 
                mini=min(mini,nums[low]);
                low=mid+1;
            }
              //vice versa just opposite of written above  
            else{
                mini=min(nums[mid],mini);
                high=mid-1;

            }
        }
        return mini;
    }
};