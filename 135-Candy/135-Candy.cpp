// Last updated: 8/17/2026, 3:10:37 PM
1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4         //int n = ratings.size();
5
6        // vector<int> left(n);
7        // vector<int> right(n);
8
9        // left[0] = 1;
10        // right[n - 1] = 1;
11
12        // // Check from left to right
13        // for(int i = 1; i < n; i++) {
14        //     //we are checking the ratings array and improving the
15        //     //left and right array
16        //     if(ratings[i] > ratings[i - 1]) {
17        //         left[i] = left[i - 1] + 1;
18        //     }
19        //     else {
20        //         left[i] = 1;
21        //     }
22        // }
23
24        // // Check from right to left
25        // for(int i = n - 2; i >= 0; i--) {
26        //     //we are checking the ratings array and improving
27        //     //right array as per 
28        //     if(ratings[i] > ratings[i + 1]) {
29        //         right[i] = right[i + 1] + 1;
30        //     }
31        //     else {
32        //         right[i] = 1;
33        //     }
34        // }
35
36         //int sum = 0;;
37
38        // for(int i = 0; i < n; i++) {
39        //     sum += max(left[i], right[i]);
40        // }
41
42        // return sum;
43   int n = ratings.size();
44        int sum = 1;
45        int i = 1;
46
47        while (i < n) {
48
49            if (ratings[i] == ratings[i - 1]) {
50                sum += 1;
51                i++;
52                continue;
53            }
54
55            int peak = 1;
56
57            while (i < n && ratings[i] > ratings[i - 1]) {
58                peak++;
59                sum += peak;
60                i++;
61            }
62
63            int down = 0;
64
65            while (i < n && ratings[i] < ratings[i - 1]) {
66                down++;
67                sum += down;
68                i++;
69            }
70
71            if (down > peak - 1) {
72                sum += down - (peak - 1);
73            }
74        }
75
76        return sum;
77    }
78};