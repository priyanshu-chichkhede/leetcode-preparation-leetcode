// Last updated: 7/3/2026, 10:22:30 PM
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;

        for (string word : words) {
            string lower = word;

            for (char &c : lower) {
                c = tolower(c);
            }

            int row;

            if (row1.find(lower[0]) != string::npos)
                row = 1;
            else if (row2.find(lower[0]) != string::npos)
                row = 2;
            else
                row = 3;

            bool valid = true;

            for (char c : lower) {
                if (row == 1 && row1.find(c) == string::npos)
                    valid = false;
                if (row == 2 && row2.find(c) == string::npos)
                    valid = false;
                if (row == 3 && row3.find(c) == string::npos)
                    valid = false;
            }

            if (valid)
                ans.push_back(word);
        }

        return ans;
    }
};