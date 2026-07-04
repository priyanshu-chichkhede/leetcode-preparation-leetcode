// Last updated: 7/4/2026, 4:38:18 PM
class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;

        while (i < j) {
            if (!(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
                  s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')) {
                i++;
            }
            else if (!(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' ||
                       s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};