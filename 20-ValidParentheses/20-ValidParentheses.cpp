// Last updated: 8/4/2026, 12:52:57 AM
1class Solution {
2public:
3    bool isValid(string s) {
4        // int i = 0;
5
6        // while(i + 1 < s.length()) {
7        //     // we do it because the length can be 0 as well so 0-1 would be -1 to prevent that we do this part 
8        //     if((s[i] == '(' && s[i+1] == ')') ||
9        //        (s[i] == '{' && s[i+1] == '}') ||
10        //        (s[i] == '[' && s[i+1] == ']')) {
11
12        //         s.erase(i, 2);
13        //         // we do this to tackle the issue of {{()}} where the adjacent paranthesis are completely different 
14
15        //         if(i > 0) {
16        //             i--;
17        //         }
18        //     }
19        //     else {
20        //         i++;
21        //     }
22        // }
23
24        // return s.empty(); // used as if s is empty it returns true or if s is not empty it returns false
25
26
27    stack<char> st;
28
29    for(int i = 0; i < s.size(); i++) {
30
31        // Opening brackets
32        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
33            st.push(s[i]);
34        }
35
36        // Closing brackets
37        else {
38
39            // No opening bracket available
40            if(st.size() == 0) {
41                return false;
42            }
43
44            // Matching brackets
45            if((st.top() == '(' && s[i] == ')') ||
46               (st.top() == '{' && s[i] == '}') ||
47               (st.top() == '[' && s[i] == ']')) {
48
49                st.pop();
50            }
51            else {
52                return false;
53            }
54        }
55    }
56
57    // If stack is empty, all brackets matched
58    if(st.size() == 0) {
59        return true;
60    }
61    else {
62        return false;
63    }
64    }
65};