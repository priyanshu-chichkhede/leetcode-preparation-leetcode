// Last updated: 7/7/2026, 2:39:56 AM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();

        for (int i = 0; i + windSize <= s2.length(); i++) {
            int windFreq[26] = {0};

            for (int j = i; j < i + windSize; j++) {
                windFreq[s2[j] - 'a']++;
            }

            bool same = true;

            for (int j = 0; j < 26; j++) {
                if (freq[j] != windFreq[j]) {
                    same = false;
                    break;
                }
            }

            if (same) {
                return true;
            }
        }

        return false;
    }
};