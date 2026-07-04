// Last updated: 7/4/2026, 4:38:19 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int n=s.size();
        int j=n-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
    }
};