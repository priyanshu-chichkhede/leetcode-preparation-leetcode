// Last updated: 7/3/2026, 10:22:18 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        vector<int> freq;

        int count = 1;

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] == arr[i-1]) {
                count++;
            }
            else {
                freq.push_back(count);
                count = 1;
            }
        }

        freq.push_back(count);

        sort(freq.begin(), freq.end());

        for(int i = 1; i < freq.size(); i++) {

            if(freq[i] == freq[i-1]) {
                return false;
            }
        }

        return true;
    }
};
//what we did is quite simple we put the given count into a new array and they compared that to the new array elements and so such that we understand that the nunmbers are unique or not 