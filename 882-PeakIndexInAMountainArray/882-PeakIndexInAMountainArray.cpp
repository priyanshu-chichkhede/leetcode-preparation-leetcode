// Last updated: 7/3/2026, 10:22:23 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        //covering all the edge cases of like one number array and starting position array and ending position
        if (n==1){return 0;}
        if (arr[0]>arr[1]){return 0;}
        if (arr[n-1]>arr[n-2]){return n-1;}
         low=1;
         high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1] ){
                return mid;
            }
            else if(arr[mid-1]>arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};