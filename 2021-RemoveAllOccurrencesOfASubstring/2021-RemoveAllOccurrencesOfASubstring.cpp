// Last updated: 7/7/2026, 2:39:43 AM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i = 0;
        // string: : npos is present as not found part like there are two answer 
        //FOUND and npos which is given down 
        while (s.find(part) != string::npos) {
            i = s.find(part);

            s.erase(i, part.length());

            if (i > 0) {
                i--;
            }
        }

        return s;
    }
};