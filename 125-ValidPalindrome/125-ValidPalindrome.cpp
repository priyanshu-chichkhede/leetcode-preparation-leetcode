// Last updated: 7/4/2026, 4:38:34 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n=s.length();
        int j=n-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue; //to discard all the next part of the loop and again come to this loop
            }
               if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};