// Last updated: 7/11/2026, 6:33:47 PM
class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            sum=sum+nums[i];

               }
        int average= sum/n;
        int smallNumber=max(1,average+1);
        
        for(int i=0;i<n;i++){
            if( smallNumber==nums[i]){
                smallNumber=smallNumber+1;
            }
        }
        return smallNumber; 
   
    }
};

// int i=0;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]<nums[j]){
        //             i=j;
        //         }
        //     } for finding the maximum code
        //     return nums[i]+1;