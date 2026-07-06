// Last updated: 7/7/2026, 2:40:24 AM
class Solution {
public:
    bool isValid(string s) {
        int i = 0;

        while(i + 1 < s.length()) {
            // we do it because the length can be 0 as well so 0-1 would be -1 to prevent that we do this part 
            if((s[i] == '(' && s[i+1] == ')') ||
               (s[i] == '{' && s[i+1] == '}') ||
               (s[i] == '[' && s[i+1] == ']')) {

                s.erase(i, 2);
                // we do this to tackle the issue of {{()}} where the adjacent paranthesis are completely different 

                if(i > 0) {
                    i--;
                }
            }
            else {
                i++;
            }
        }

        return s.empty(); // used as if s is empty it returns true or if s is not empty it returns false
    }
};