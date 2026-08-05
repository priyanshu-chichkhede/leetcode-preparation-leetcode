// Last updated: 8/5/2026, 10:18:42 PM
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n=heights.size();
5        vector<int> left;
6        vector<int> right;
7        stack<int> st;
8        for(int i=0;i<n;i++){
9            while(st.size()>0 && heights[st.top()]>=heights[i]){
10                st.pop();
11            }
12            if(st.size()==0){
13                left.push_back(-1);
14            }
15            else{
16                left.push_back(st.top());
17            }
18            st.push(i);
19        }
20        while(!st.empty()){
21            st.pop();
22        }
23        for(int i=n-1;i>=0;i--){
24            while(st.size()>0 && heights[st.top()]>=heights[i]){
25                st.pop();
26            }
27            if(st.size()==0){
28                right.push_back(n);
29            }
30            else{
31                right.push_back(st.top());
32            }
33            
34            st.push(i);
35        }
36        reverse(right.begin(), right.end());
37        int ans=0;
38        for(int i=0;i<n;i++){
39            int width=right[i]-left[i]-1;
40            int area=heights[i]*width;
41             ans=max(ans,area);
42        }
43        return ans;
44
45
46    }
47};