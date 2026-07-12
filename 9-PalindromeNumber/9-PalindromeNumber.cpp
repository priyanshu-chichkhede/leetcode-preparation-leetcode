// Last updated: 7/12/2026, 11:37:30 PM
class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str[i]==str[j]){
            i++;
            j--;
            
        }
        else{
            return false;
        }}
        return true;
    }
};