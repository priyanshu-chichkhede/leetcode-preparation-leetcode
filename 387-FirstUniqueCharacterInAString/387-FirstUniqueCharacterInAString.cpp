// Last updated: 7/7/2026, 2:40:01 AM
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};