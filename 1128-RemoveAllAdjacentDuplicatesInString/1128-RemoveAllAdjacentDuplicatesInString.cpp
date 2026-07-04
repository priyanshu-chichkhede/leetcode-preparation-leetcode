// Last updated: 7/4/2026, 5:24:17 PM
class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;

        while (i + 1 < s.size()) {
            // the loop till the end is checked and then erase is done
            // erase(i,number of character we want to delete )
            //after deleting the 2 character next characters with number we have deleted comes
            if (s[i] == s[i + 1]) {
                s.erase(i, 2);
             // what if i<0 then it would be a runtime error to prevent that we keep i positive and if it is greater than 0 then we delete to make sure to check the previous number as well;  
                if (i > 0) {
                    i--;
                }
            }
            else {
                i++;
            }
        }

        return s;
    }
};