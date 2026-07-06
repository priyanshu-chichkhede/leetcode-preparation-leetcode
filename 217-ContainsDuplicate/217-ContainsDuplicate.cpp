// Last updated: 7/7/2026, 2:40:09 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // the reason we use sorting is because there is a testcase where it is 1000;
        //so the time limit was exceeded therefore we sort and then we return true
        //without checking the whole scenario
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
};
// +++++++++++ BRUTE FORCE +++++++++++++++  
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int count =0;
//             for(int j=0;j<n;j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count>1)//it can appear more than 1 and 2 so it can still be the like duplicate
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// }; 