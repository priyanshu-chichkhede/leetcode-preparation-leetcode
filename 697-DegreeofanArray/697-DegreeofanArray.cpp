// Last updated: 7/4/2026, 11:21:33 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        reverse(s.begin(), s.end());
5        // we will first reverse the given string 
6
7        string ans = "";
8        // creating a ans string on the whole sentence
9
10        for (int i = 0; i < s.length(); i++) {
11            string word = "";
12            // we dont know what a word is so we put the characters in a word 
13            //and wherever there is a whitespace we stop and validate that as 
14            //as a word
15
16            while (i < s.length() && s[i] != ' ') {
17                word = word + s[i];
18                i++;
19            }
20            //we again then reverse the word and store it in the ans where 
21            //there is a space for 2nd word and the actual word which we just reversed
22            reverse(word.begin(), word.end());
23
24            if (word.length() > 0) {
25                ans = ans + " " + word;
26            }
27        }
28        //we remove the first whitespace as shown on the ans part where from 1 the substring starts
29        // removing the 0
30
31        return ans.substr(1);
32    }
33};
34