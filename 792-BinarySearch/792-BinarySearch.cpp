// Last updated: 7/7/2026, 2:39:53 AM
class Solution {
public:
int Binsearch(vector<int>& nums, int target,int start,int end){
    if(start>end){
        return -1; //base case where if the end is smaller than the start means that the 
        //loop has intersected both the end and start 
    }
    int mid=(start+end)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid]<=target){
        return Binsearch(nums,target,mid+1,end);
    }
    else{
        return Binsearch(nums,target,start,mid-1);
    }

}
    int search(vector<int>& nums, int target) {
        return Binsearch(nums, target,0,nums.size()-1);
    }
};