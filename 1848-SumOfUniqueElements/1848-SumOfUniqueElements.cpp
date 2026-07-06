// Last updated: 7/7/2026, 2:39:46 AM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
            // you keep one pointer as it is and check with j which moves in the array 
            //when u get a count increase it 
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }

            if(count == 1)// when i and j are both same then for that the counter is 1 so after 
            //that any counter would show duplicate value which we need to discard
            {
                sum = sum + nums[i];
            }
        }

        return sum;
    }
};
//PAIR condition → decide during comparison when all the values of the array are unique or
//different 

//WHOLE ARRAY condition → finish checking all elements, then decide words like frequency duplicate
//unique then check the whole array not just for one value