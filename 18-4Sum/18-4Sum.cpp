// Last updated: 7/12/2026, 8:57:48 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int n=chars.size();
5        int idx=0;
6        for(int i=0;i<n;i++){
7            int count=1;//because the current count is always taken with one letter 
8            //as aaa if count is 0 then we get 2 count but there are 3 so we put 1 because
9            //we count the one common occurrence as well
10           while(i<n-1 && chars[i]==chars[i+1]){
11            count++;
12            i++;
13           }
14           if(count==1){
15            chars[idx]=chars[i];
16            idx++;
17           }
18           else{
19              chars[idx]=chars[i];
20                idx++;
21            string str=to_string(count);
22            for(int j=0;j<str.length();j++){
23              chars[idx]=str[j];
24              idx++;
25            }
26            
27           }
28        }
29        return idx;
30    }
31};