// Last updated: 7/12/2026, 11:45:18 PM
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        vector <int> ans;
5        for(int i=1;i<num;i++){
6            if(num%i==0){
7                ans.push_back(i);
8            }
9        }
10        int sum=0;
11        for(int j=0;j<ans.size();j++){
12            sum=sum+ans[j];
13        }
14        if(sum==num){
15            return true;
16        }
17        else{
18            return false;
19        }
20    }
21};