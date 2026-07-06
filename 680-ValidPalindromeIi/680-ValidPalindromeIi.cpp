// Last updated: 7/7/2026, 2:39:55 AM
// class Solution {
// public:
//     bool validPalindrome(string s) {
//         int i = 0;
//         int j = s.length() - 1;
//         int count = 0;

//         while(i < j) {

//             if(s[i] == s[j]) {
//                 i++;
//                 j--;
//             }
//             else {

//                 if(s[i + 1] == s[j]) {
//                     s.erase(i, 1);
//                     count++;
//                     j--;
//                 }
//                 else if(s[i] == s[j - 1]) {
//                     s.erase(j, 1);
//                     count++;
//                     j--;
//                 }
//                 else {
//                     return false;
//                 }

//                 if(count > 1) {
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }
// };
class Solution {
public:
    bool check(string &s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i < j) {

            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                return check(s, i + 1, j) ||
                       check(s, i, j - 1);
            }
        }

        return true;
    }
};