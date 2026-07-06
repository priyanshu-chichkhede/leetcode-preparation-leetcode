// Last updated: 7/7/2026, 2:40:17 AM
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        // we will first reverse the given string 

        string ans = "";
        // creating a ans string on the whole sentence

        for (int i = 0; i < s.length(); i++) {
            string word = "";
            // we dont know what a word is so we put the characters in a word 
            //and wherever there is a whitespace we stop and validate that as 
            //as a word

            while (i < s.length() && s[i] != ' ') {
                word = word + s[i];
                i++;
            }
            //we again then reverse the word and store it in the ans where 
            //there is a space for 2nd word and the actual word which we just reversed
            reverse(word.begin(), word.end());

            if (word.length() > 0) {
                ans = ans + " " + word;
            }
        }
        //we remove the first whitespace as shown on the ans part where from 1 the substring starts
        // removing the 0

        return ans.substr(1);
    }
};
