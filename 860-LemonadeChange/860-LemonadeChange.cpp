// Last updated: 8/16/2026, 8:51:47 PM
1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4        int n = bills.size();
5        int five = 0;
6        int ten = 0;
7
8        for(int i = 0; i < n; i++) {
9
10            if(bills[i] == 5) {
11                five++;
12            }
13
14            else if(bills[i] == 10) {
15                if(five > 0) {
16                    ten++;
17                    five--;
18                }
19                else {
20                    return false;
21                }
22            }
23
24            else if(bills[i] == 20) {
25                if(ten > 0 && five > 0) {
26                    ten--;
27                    five--;
28                }
29                else if(five >= 3) {
30                    five -= 3;
31                }
32                else {
33                    return false;
34                }
35            }
36        }
37
38        return true;
39    }
40};