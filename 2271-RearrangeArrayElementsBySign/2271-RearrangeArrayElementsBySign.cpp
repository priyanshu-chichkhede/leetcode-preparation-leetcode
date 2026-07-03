// Last updated: 7/3/2026, 10:22:20 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
           // here we made a new array for like storing the numbers which are present 
        int pos = 0; // even indices for storing the postive integers as per 
        int neg = 1; // odd indices for storing the negative integers as per  
        for(int i=0;i<n;i++){
            if(nums[i]>0){
             ans[pos]=nums[i];
             pos=pos+2;//so after putting the value in the given index of positive we just 
             //increase that with 2 
            }
            else{
                ans[neg]=nums[i];
                  neg=neg+2;//so after putting the value in the given index of positive just 
             //increase that with 2 
            }
        }
        return ans;
    }
};